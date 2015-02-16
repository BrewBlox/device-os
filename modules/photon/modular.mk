# Makefile that included by all modules - this defines the layout of the various modules

MODULAR_FIRMWARE=y
USER_FIRMWARE_IMAGE_SIZE=0x20000
USER_FIRMWARE_IMAGE_LOCATION=0x80A0000

# Ensure these defines are passed to all sub makefiles
GLOBAL_DEFINES += USER_FIRMWARE_IMAGE_SIZE=$(USER_FIRMWARE_IMAGE_SIZE)
GLOBAL_DEFINES += USER_FIRMWARE_IMAGE_LOCATION=$(USER_FIRMWARE_IMAGE_LOCATION)
GLOBAL_DEFINES += MODULAR_FIRMWARE


