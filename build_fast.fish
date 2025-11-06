#!/bin/fish

# Remove default build vars that are not needed
set -e CARCH CFLAGS CHOST CPPFLAGS CXXFLAGS DEBUG_CXXFLAGS DDEBUG_CFLAGS

if test -d qmk_firmware/keyboards/zsa/moonlander/keymaps/pJYgD/
    rm -rf qmk_firmware/keyboards/zsa/moonlander/keymaps/pJYgD/
end

cp -r pJYgD qmk_firmware/keyboards/zsa/moonlander/keymaps/ || exit 1

cd qmk_firmware/ || exit 1

qmk compile -kb zsa/moonlander -km pJYgD

cd .build || exit 1

echo "Copying zsa_moonlander_pJYgD.bin to ~/winhome/Downloads/"
cp zsa_moonlander_pJYgD.bin ~/winhome/Downloads/ || exit 1
