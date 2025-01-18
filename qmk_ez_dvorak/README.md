# My Dvorak layout for Ergodox EZ using QMK

![ErgoDox EZ Dvorak using QMK](https://raw.githubusercontent.com/etu/ergodox-keymaps/main/qmk_ez_dvorak/layout.png)

## How to flash

```bash
# Prepare the code
qmk clone -b 0.27.9

# Enter directory
cd qmk_firmware

# Copy my keymap.c over the default one for this ergodox
cp ../keymap.c keyboards/ergodox_ez/keymaps/default/keymap.c

# Build firmware
qmk compile -kb ergodox_ez -km default

# Flash firmware
sudo qmk flash -kb ergodox_ez -km default
```
