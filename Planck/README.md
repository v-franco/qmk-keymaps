# The Planck Keyboard

The planck is an ortholinear 40% keyboard laid out in a 4 by 12 grid.
It functions using the QMK Firmware, which allows full customization of the board, which is very helpful because not everyone willl have the same needs in a keyboard,
specially with one that has only 47 keys and depends on layers in order to access all the characters, key combinations, and macros not available on the base layer. 

Since I am a software engineer, I designed my layout with productivity while coding in mind. 
The planck I use is the rev6 by DROP + OLKB, with a complete grid layout (which means all the keys in the board are 1U)

## Base layer
The base layer uses QWERTY as a layout, with a backspace next to my designed spacebar.
Next to the spacebar and the backspace keys, I included the `lower` and `raise` keys, which access layers `2` and `3`, respectively.
The shift, ctrl, and alt keys use tap functions in order to act as a normal `shift`, `ctrl`, and `alt` when pressed continously, and to act as `()`, `[]`, and `<>` when single-tapped. Next to the `alt` keys, I also included `{}`. This is because I use these symbols quite often when programming.

The base layer also includes a single Windows key, because I use shortcuts quite often.
The `tab` key works as a `tab` when pressed, and when held it activates my `layer 4`, which is mapped for navigation, copy+paste, and other shortcuts.

## Layer 1
The layer 1 consists of exactly the same layout as the base layer, with the one change being that the layout is COLEMAK, but all the other keys remain the same as the base layer.

## Layer 2 
The layer 2 consists of the Function (F1-F12) keys, and numbers.
The numbers are arranged like in a normal keyboard, but I also included a numpad layout connecting with `7`, `8`, and `9`, because I find it easy to use. 
Next to the numpad I included the four basic operations, `.`, `=`, `()`, and the `Enter` key. 

## Layer 3
Layer 3 consists of symbols, which include all the `shift` activated symbols that are located with the numbers in a normal keyboard, and the symbols I have set as tap functions 
on the base layer. I normally only use those with the base layer, however I considered important to have them in this layer, with the rest of the symbols.

## Layer 4 
Layer 4 is used for navigation and other settings. 
I included two sets of arrow keys, the first one being `W A S D` and the second one being `H J K L` (like used in VIM).
`Copy` and `Paste` are mapped to `c` and `v`, and around the VIM-like arrows, I included navigation keys such as `Page up`, `Page down`, `Home`, and `Delete`.
Below the VIM-like arrows I set volume keys, and Brightness control in the upper right corner.
While in this layer, the lower right corner key (normally `right ctrl`) is set as a momentary layer, which is mapped to layer `5`

## Layer 5
Layer 5 is used to set the default layer, which can be layer `0` (QWERTY) or layer `1` (COLEMAK), and also includes a `Reset` and `Debug` keys, for QMK configuration.
