with (import <nixpkgs> {});

mkShell {
  buildInputs = [
    # qmk_firmware
    teensy-loader-cli
  ];
}
