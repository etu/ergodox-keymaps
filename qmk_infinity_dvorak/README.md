# My Dvorak layout for Ergodox Infinity using QMK

![ErgoDox Infinity Dvorak using QMK](https://raw.githubusercontent.com/etu/ergodox-keymaps/main/qmk_infinity_dvorak/layout.png)

## How to flash

```bash
# Prepare the code
git clone https://github.com/qmk/qmk_firmware.git

# Enter directory
cd qmk_firmware

# Init and update submodules needed
git submodule update --init

# Copy my keymap.c over the default one for this ergodox
cp ../keymap.c keyboards/ergodox_infinity/keymaps/default/keymap.c

# Use nix-shell to get needed deps
nix-shell --run fish

# Build for left half
make ergodox_infinity:default

# Build for right half
make ergodox_infinity:default MASTER=right

# Flash left half
sudo make ergodox_infinity:default:dfu-util

# Flash right half
sudo make ergodox_infinity:default:dfu-util MASTER=right
```
