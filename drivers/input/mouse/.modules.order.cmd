cmd_drivers/input/mouse/modules.order := {   echo drivers/input/mouse/appletouch.ko;   echo drivers/input/mouse/bcm5974.ko;   echo drivers/input/mouse/cyapatp.ko;   echo drivers/input/mouse/elan_i2c.ko;   echo drivers/input/mouse/sermouse.ko;   echo drivers/input/mouse/synaptics_i2c.ko;   echo drivers/input/mouse/synaptics_usb.ko;   echo drivers/input/mouse/vsxxxaa.ko; :; } | awk '!x[$$0]++' - > drivers/input/mouse/modules.order