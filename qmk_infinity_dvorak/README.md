# My Dvorak layout for Ergodox Infinity using QMK

![ErgoDox Infinity Dvorak using QMK](https://raw.githubusercontent.com/etu/ergodox-keymaps/main/qmk_infinity_dvorak/layout.png)

## How to flash

```bash
# Prepare the code
git clone https://github.com/qmk/qmk_firmware.git

# Enter directory
cd qmk_firmware

# Copy my keymap.c over the default one for this ergodox
cp ../keymap.c keyboards/input_club/ergodox_infinity/keymaps/default/keymap.c

# Build firmware
qmk compile -kb ergodox_infinity -km default

# Flash firmware
qmk flash -kb ergodox_infinity -km default
```
