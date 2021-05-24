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

The switches I currently have on the board are the Gazzew Boba U4 Silent 62g silent tactile switches, but because of the lack of noise, I may change them with the Holy Pandas my planck currently has. The reason for the incoming swap is because the planck is going to be my "to go" board, and I don't think it is a good idea to use in public spaces a very loud keyboard (the Holy Pandas are certainly loud). 

## Layout
The crkbd supports VIA configuration. VIA is a QMK tool that basically acts as a UI, like QMK Configurator, however, VIA updates the layout/lighting changes almost instantly, without having to flash the board again. Despite it lacking certain features only available through coding the keymap/rules/config files, I'm going to give it a shot with this keyboard, but I'll still probably make my own custom keymap/firmware, just because I like programming in C.

## Future plans
I plan on getting a 3D printed case for better aesthetics/safety of the board, adding per-key lighting, and swapping the ProMicros for a better MCU.