with (import <nixpkgs> {});

mkShell {
  buildInputs = [
    dfu-util
    gnumake
    unzip
  ];
}
