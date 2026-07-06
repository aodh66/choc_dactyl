# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040

# RP2040-specific options
ALLOW_WARNINGS = yes
PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.

SERIAL_DRIVER = vendor
SERIAL_USART_TX_PIN = GP1

I2C_DRIVER_REQUIRED = yes
# I2C_DRIVER = I2CD1
