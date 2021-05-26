# The Corne Keyboard

The corne [(crkbd)](https://github.com/foostan/crkbd) is a split keyboard with a layout of 3 by 6 column staggered keys, and 3 thumb keys per side.

## Why use a crkbd over other keyboards?

After using the planck, I realized that I like small keyboards, specially the customization they can have, and I improved my efficiency while coding and writing. 
However, after very long sessions of typing with the planck, I started feeling a bit uncomfortable with my shoulders, because they tend to be inwards because of the 
very compact desing of the planck, so my next choice was to get a split keyboard.

The corne keyboard not only fits the split part, but also removes 3 keys which I really wasn't using in the planck, so my layout didn't change that much, and it allows me to have a more relaxed position for long work sessions. 
I'll still use the planck, because I simply love that board, but from now on, I'll mainly use it when not working at home, however, both boards offer great portability due to their sizes.

## Build guide
The crkbd isn't a comercially made keyboard, like the planck (which you can get on the Drop website, or Amazon), there isn't a specific vendor or distributor, however, all the information on how to make one is on [Foostans crkbd github](https://github.com/foostan/crkbd/blob/master/corne-classic/doc/buildguide_en.md).

## My crkbd
My crkbd uses a ProMicro MCU on each side, however, should one of them break (ProMicros tend to break easily) I'll swap them out for Elite-Cs.
I can swap the MCUs very easily because I installed sockets on both the OLED screens and the MCUs, because having to desolder them directly from the PCB in case of replacement, would have been very problematic. At the moment, my crkbd only has underglow RGB.

### OLED Screens
To give the OLED screens something more unique than the default behavior (showing only current layer or a kl) I decided to implement [Luna](https://www.reddit.com/r/olkb/comments/lmtgxc/introducing_luna_the_qmk_keyboard_pet/), the awesome virtual QMK pet made by [HellSing](https://github.com/HellSingCoder).
Luna is a virtual pet that responds to certain actions like WPM, spaces, holding down Ctrl, and to complement the cool animations, the left OLED shows the current OS, current layer, and if caps lock is enabled or not. The left scren shows the WPM. 

Luna's original code is made for the Sofle keyboard, and the [keymap](https://github.com/HellSingCoder/qmk_firmware/tree/master/keyboards/sofle/keymaps/helltm) with it is very different than mine, so I adapted the Luna code to a ckrbd using my own keymap, rules, and config file. (it can be found on this repo!)

## Layout
Coming soon

## Future plans
I plan on getting a 3D printed case for better aesthetics/safety of the board, adding per-key lighting, and swapping the ProMicros for a better MCU.
