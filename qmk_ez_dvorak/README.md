# My Dvorak layout for Ergodox EZ using QMK

![ErgoDox EZ Dvorak using QMK](https://raw.githubusercontent.com/etu/ergodox-keymaps/main/qmk_ez_dvorak/layout.png)

## How to flash

```bash
# Prepare the code
git clone https://github.com/qmk/qmk_firmware.git

# Enter directory
cd qmk_firmware

# Init and update submodules needed
git submodule update --init

# Copy my keymap.c over the default one for this ergodox
cp ../keymap.c keyboards/ergodox_ez/keymaps/default/keymap.c

# Use nix-shell to get needed deps
nix-shell --run fish

# Build firmware
make ergodox_ez:default

# Flash firmware
sudo teensy-loader-cli -mmcu=atmega32u4 -w ergodox_ez_default.hex -v
```
