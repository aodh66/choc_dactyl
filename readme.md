# Choc_Dactyl

![choc_dactyl](https://imgur.com/rRxBK36.jpeg)

This is a keyboard [generated by Omurovec](https://github.com/omurovec/dactyl-high-profile?tab=readme-ov-file). It's a fork of the [dactyl-manuform-tight](https://github.com/okke-formsma/dactyl-manuform-tight) that is spaced for Choc low profile switches rather than the normal MX style. If you look at my previous build ([Magwave44](https://github.com/aodh66/qmk_magwave44?tab=readme-ov-file)), you will see that it shares a lot of layout similarities. I build my Magwave44 with Choc switches too, but it is MX spaced. The main differences are the fully enclosed structure, choc spacing, the lack of encoders, the 2 extra thumb buttons per hand, and the 2 extra keys per hand located at the bottom of the middle and ring columns.

I could not find any firmware for this keyboard, so I wrote some myself.
* Keyboard Maintainer: [aodh66](https://github.com/aodh66)
* Hardware Supported: RP2040-Matrix

## How to compile the keymap
* Install [QMK](https://docs.qmk.fm/newbs)
* Clone this repo into `qmk_firmware/keyboards/handwired`. Open the terminal in the previously mentioned folder.

```
git clone git@github.com:aodh66/choc_dactyl.git
```

* Navigate to your `qmk_firmware/keyboards/handwired/choc_dactyl/keymaps/aodh66` directory(folder). Rename `envEXAMPLE.h` to `env.h` and change the `"insert email string"` text to your email inside `"`quotation marks `"ExampleEmail@gmail.com"`.

* Open QMK MSYS2 or however you interact with qmk in the terminal.

```
qmk compile -kb handwired/choc_dactyl -km aodh66

```

Note: If you want to make this your default keyboard.

```
    qmk config user.keyboard=handwired/choc_dactyl
    qmk config user.keymap=aodh66
```

You can use the above command to designate your own keymap if you decide to make one and separate it from mine. You could also leave it and use `default`  instead of `aodh66`.

* You should have a `handwired_choc_dactyl_aodh66.uf2` file in your qmk_firmware directory ready to be flashed.

## How to flash the firmware to your MCU
Plug in your RP2040-Matrix and press both of the buttons on it, to put it in boot mode. It should show up as a USB drive in your file manager. Drag the .uf2 file from the previous step into it. It should now disconnect itself and start working. You can test with your keyboard or you can short appropriate pins to test the key functions (NOTE: Do not do this if you don't know what you are doing, or you can damage your MCU).

# Current Keymap

## Alpha Layout - Recurva (Colstag)
[Recurva Breakdown](https://github.com/GalileoBlues/Recurva?tab=readme-ov-file#variations)

![picture of the recurva letter layout](https://imgur.com/e1LWbWc.jpeg)

## Overall Layout

![picture of my choc_dactyl keymap layers]()

// Insert thought process on key locations here

## Arcane Key Definitions
Format: Previous Key Pressed > N-gram/Word Output  | Output if opposite Arcane key is pressed after

### Left Arcane Key
```
a > and         | Spc
b > bb          | Spc
c > cc          | Spc
d > dd          | Spc
e > ence        | Spc
f > ff          | Spc
g > gg          | Spc
h > have        | Spc
i > ing         | Spc
j > just        | Spc
k > kk          | Spc
l > lmao        | Spc
m > ment        | Spc
n > nn          | Spc
o > oa          | Spc
p > pp          | Spc
QU > question   | Spc NOTE: I do not use a standard Q key, I have a QU key and Q on a combo.
r > rr          | Spc
s > ss          | Spc
t > tt          | Spc
u > under       | Spc
v > vv          | Spc
w > ww          | Spc
x > xx          | Spc
y > you         | Spc
z > zz          | Spc
. > ./          | Spc
' > 've         | Spc
DISABLED || , > ", but "    | "the"
Spc > " the "   | Nothing
```

## Right Arcane Key
```
a > aa          | Spc
b > because     | Spc
c > comp        | Spc
d > dent        | Spc
e > ee          | Spc
f > from        | Spc
g > general     | Spc
h > hh          | Spc
i > ii          | Spc
j > jj          | Spc
k > keyboard    | Spc
l > ll          | Spc
m > mm          | Spc
n > n't         | Spc
o > oo          | Spc
p > people      | Spc
QU > q          | Spc NOTE: I do not use a standard Q key, I have a QU key and Q on a combo.
r > rn          | Spc
s > sion        | Spc
t > tion        | Spc
u > uu          | Spc
v > very        | Spc
w > which       | Spc
x >             | Spc
y > yy          | Spc
z >             | Spc
. > ..          | Spc
? > ??          | Spc
/ > //          | Spc
; > ;;          | Spc
' > 'll         | Spc
DISABLED || , > ", and "    | "the"
Spc > " the "   | Nothing
`