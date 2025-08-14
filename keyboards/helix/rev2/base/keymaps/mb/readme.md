# The Default Helix Layout
## Customize

see `qmk_firmware/keyboards/helix/rev2/keymaps/default/rules.mk`

```
# Helix Spacific Build Options
# you can uncomment and edit follows 7 Variables
#  jp: 以下の7つの変数を必要に応じて編集し、コメントアウトをはずします。
# OLED_ENABLE = yes           # OLED_ENABLE
# LOCAL_GLCDFONT = no         # use each keymaps "helixfont.h" insted of "common/glcdfont.c"
# LED_BACK_ENABLE = no        # LED backlight (Enable WS2812 RGB underlight.)
# LED_UNDERGLOW_ENABLE = no   # LED underglow (Enable WS2812 RGB underlight.)
# LED_ANIMATIONS = yes        # LED animations
# IOS_DEVICE_ENABLE = no      # connect to IOS device (iPad,iPhone)
```
## Compile

go to qmk top directory.
```
$ cd qmk_firmware
```

build
```
$ make helix:default                         # with oled
$ make helix/rev2/back:default               # with oled and backlight
$ make HELIX=no-ani helix/rev2/back:default  # with oled and backlight without animation
$ make helix/rev2/under:default              # with oled and underglow
$ make HELIX=no-oled helix:default           # without oled
```

build (experimental use of split_common with backlight and oled)
```
$ make helix/rev2/sc:default
```

flash to keyboard
```
$ make helix:default:flash                         # with oled
$ make helix/rev2/back:default:flash               # with oled and backlight
$ make HELIX=no-ani helix/rev2/back:default:flash  # with oled and backlight without animation
$ make helix/rev2/under:default:flash              # with oled and underglow
$ make HELIX=no-oled helix:default:flash           # without oled
```

## Link
* more detail wrote in Japanese [helix/Doc/firmware_jp.md](https://github.com/MakotoKurauchi/helix/blob/master/Doc/firmware_jp.md)
* [Helix top](https://github.com/MakotoKurauchi/helix)

