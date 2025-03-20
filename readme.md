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

* Navigate to your `qmk_firmware/keyboards/handwired/choc_dactyl/keymaps/aodh66` directory(folder). Rename `envEXAMPLE.h` to `env.h` and change the `"insert email string"` text to your email(s) inside `"`quotation marks `"ExampleEmail@gmail.com"`.

* Note that you should check that the correct half of the keyboard is uncommented in the `config.h` file. You want `#define MASTER_LEFT` uncommented if you are plugging in your left half (as is standard), or `#define MASTER_RIGHT` if you are plugging in the right half. Comment the one you are not currently flashing.

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

![picture of my choc_dactyl keymap layers](https://raw.githubusercontent.com/aodh66/choc_dactyl/c4688c39331713f5456516c2de462b3f7df6a261/keymaps/aodh66/keymap_drawer/my_keymap.svg)

// Insert thought process on key locations here

## Arcane Key Definitions
Format: Previous Key Pressed > N-gram/Word Output  | Output if opposite Arcane key is pressed after

### Left Arcane Key
```
a   ->   and      | 
b   ->   bb       | 
c   ->   cc       | 
d   ->   dd       | 
e   ->   ent      | ention
f   ->   ff       | 
g   ->   gg       | 
h   ->   her      | 
i   ->   ing      | 
j   ->   just     | 
k   ->   kk       | 
l   ->   lmao     | 
m   ->   ment     | mention
n   ->   nn       | 
o   ->   oa       | 
p   ->   pp       | 
qu  ->   question | NOTE: I do not use a standard Q key, I have a QU key and Q on a combo.
r   ->   rr       | 
s   ->   ss       | ssion
t   ->   tt       | 
u   ->   ue       | 
v   ->   vv       | 
w   ->   ww       | 
x   ->   xx       | 
y   ->   you      | 
z   ->   zz       | 
.   ->   ./       | 
'   ->   've      |
?   ->   ??       | 
&   ->   &&       | 
|   ->   ||       | 
_   ->   __       | 
/   ->   //       | 
<   ->   <=       |
>   ->   >=       |
Spc ->   " the"   | 
`   ->   ```(Enter)```| 
```

## Right Arcane Key
```
a   ->   aa       | 
b   ->   because  | 
c   ->   comp     | 
d   ->   dent     | 
e   ->   ee       | 
f   ->   from     | 
g   ->   great    | 
h   ->   hh       | 
i   ->   ii       | 
j   ->   jj       | 
k   ->   know     | 
l   ->   ll       | llmao
m   ->   mm       | mment
n   ->   n't      | 
o   ->   oo       | 
p   ->   people   | 
qu  ->   q        | NOTE: I do not use a standard Q key, I have a QU key and Q on a combo.
r   ->   rn       | 
s   ->   sion     | 
t   ->   tion     | 
u   ->   uu       | 
v   ->            | 
w   ->   with     | wither
x   ->            | 
y   ->   yy       | 
z   ->            | 
.   ->   ..       | ../
;   ->   ::       | 
'   ->   'll      | 
Spc ->   " the"   | 
```