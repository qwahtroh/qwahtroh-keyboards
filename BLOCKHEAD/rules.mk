# MCU name
MCU = atmega32u4

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite       # Virtual DIP switch configuration
EXTRAKEY_ENABLE = yes       # Audio control and System control
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = yes      # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
OLED_DRIVER_ENABLE = yes
ENCODER_ENABLE = yes
CONSOLE_ENABLE = yes
LEADER_ENABLE = no
FAUXCLICKY_ENABLE = no
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
KEY_LOCK_ENABLE = no
TERMINAL_ENABLE = no
LTO_ENABLE = yes
MOUSEKEY_ENABLE = no       # Mouse keys'

WPM_ENABLE = no

RGBLIGHT_ANIMATIONS = yes