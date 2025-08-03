#!/bin/bash

layout_id="pJYgD"
layout_geometry="moonlander"
firmware_version=25

echo "################################################################################"
echo "Checkout Repository"
git checkout oryx

echo "################################################################################"
echo "Download the full history for the merge to work correctly"
git pull --unshallow

echo "################################################################################"
echo "Download layout source"
_data='{"query":"query getLayout($hashId: String!, $revisionId: String!, $geometry: String) {layout(hashId: $hashId, geometry: $geometry, revisionId: $revisionId) {  revision { hashId, qmkVersion, title}}","variables":{"hashId":"'"${layout_id}'"',"geometry":"'"${layout_geometry}"'","revisionId":"latest"}}'
response=$(curl --location 'https://oryx.zsa.io/graphql' --header 'Content-Type: application/json' --data "$_data" | jq '.data.layout.revision | [.hashId, .qmkVersion, .title]')
hash_id=$(echo "${response}" | jq -r '.[0]')
firmware_version=$(printf "%.0f" "$(echo "${response}" | jq -r '.[1]')")
change_description=$(echo "${response}" | jq -r '.[2]')
if [[ -z "${change_description}" ]]; then
	change_description="latest layout modification made with Oryx"
fi

curl -L "https://oryx.zsa.io/source/${hash_id}" -o source.zip

echo firmware_version="${firmware_version}" >>"$GITHUB_OUTPUT"
echo change_description="${change_description}" >>"$GITHUB_OUTPUT"

echo "################################################################################"
echo "Unzip the source file"
unzip -oj source.zip '*_source/*' -d "${layout_id}"
rm source.zip

echo "################################################################################"
echo "Commit and Push changes"
CHANGE_DESCRIPTION="${change_description}"
git config --local user.name "github-actions"
git config --local user.email "github-actions@github.com"
git add .
printf "✨(oryx): %s\n" "$CHANGE_DESCRIPTION" | git commit -F - || echo "No layout change"
git push

echo "################################################################################"
echo "Merge Oryx with custom QMK"
git fetch origin main
git checkout -B main origin/main
git merge -Xignore-all-space oryx
git push

echo "################################################################################"
echo "Update QMK firmware submodule to latest version (${firmware_version})"
git submodule update --init --remote --depth=1 --no-single-branch
cd qmk_firmware
git checkout -B firmware${firmware_version} origin/firmware${firmware_version}
git submodule update --init --recursive
cd ..
git add qmk_firmware
git commit -m "✨(qmk): Update firmware" || echo "No QMK change"
git push

echo "################################################################################"
echo "Build qmk docker image"
docker build -t qmk .

echo "################################################################################"
echo "Build the layout"
# Set keyboard directory and make prefix based on firmware version
if [ "${firmware_version}" -ge 24 ]; then
	keyboard_directory="qmk_firmware/keyboards/zsa"
	make_prefix="zsa/"
else
	keyboard_directory="qmk_firmware/keyboards"
	make_prefix=""
fi

# Copy layout files to the qmk folder
rm -rf "${keyboard_directory}/${layout_geometry}/keymaps/${layout_id}"
mkdir -p "${keyboard_directory}/${layout_geometry}/keymaps" && cp -r "${layout_id}" "$_"

# Build the layout
docker run -v ./qmk_firmware:/root --rm qmk /bin/sh -c "
qmk setup zsa/qmk_firmware -b firmware${firmware_version} -y
make ${make_prefix}${layout_geometry}:${layout_id}
"

# Find and export built layout
normalized_layout_geometry="$(echo "${layout_geometry}" | sed 's/\//_/g')"
echo built_layout_file="$(find ./qmk_firmware -maxdepth 1 -type f -regex ".*${normalized_layout_geometry}.*\.\(bin\|hex\)$")"
echo normalized_layout_geometry="${normalized_layout_geometry}"

# echo "################################################################################"
# echo "Upload layout"
# echo built_layout_file=$(find ./qmk_firmware -maxdepth 1 -type f -regex ".*${normalized_layout_geometry}.*\.\(bin\|hex\)$") >>"$GITHUB_OUTPUT"
# echo normalized_layout_geometry=${normalized_layout_geometry} >>"$GITHUB_OUTPUT"
