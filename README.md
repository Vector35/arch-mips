# arch-mips

This is the MIPS architecture plugin that ships with Binary Ninja.

## Issues

Issues for this repository have been disabled. Please file an issue for this repository at https://github.com/Vector35/binaryninja-api/issues. All previously existing issues for this repository have been transferred there as well.


## Building

Building the architecture plugin requires `cmake` 3.9 or above. You will also need the [Binary Ninja API source](https://github.com/Vector35/binaryninja-api).

First, set the `BN_API_PATH` environment variable to the path containing the Binary Ninja API source tree.

Run `cmake`. This can be done either from a separate build directory or from the source directory. If your app is installed in a non-default location, set BN_INSTALL_DIR in your cmake invocation, like `cmake -DBN_INSTALL_DIR=/Applications/Binary\ Ninja\ DEV.app/'.  Once that is complete, run `make` in the build directory to compile the plugin.

The plugin can be found in the root of the build directory as `libarch_mips.so`, `libarch_mips.dylib` or `arch_mips.dll` depending on your platform.

To install the plugin, first launch Binary Ninja and uncheck the "MIPS architecture plugin" option in the "Core Plugins" section. This will cause Binary Ninja to stop loading the bundled plugin so that its replacement can be loaded. Once this is complete, you can copy the plugin into the user plugins directory (you can locate this by using the "Open Plugin Folder" option in the Binary Ninja UI).

**Do not replace the architecture plugin in the Binary Ninja install directory.  This will be overwritten every time there is a Binary Ninja update. Use the above process to ensure that updates do not automatically uninstall your custom build.**

## Pull Requests

Please follow whatever formatting conventions are present in the file you edit.  Pay attention to curly brackets, spacing, tabs vs. spaces, etc.
