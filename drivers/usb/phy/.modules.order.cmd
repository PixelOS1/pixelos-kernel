cmd_drivers/usb/phy/modules.order := {   echo drivers/usb/phy/phy-generic.ko; :; } | awk '!x[$$0]++' - > drivers/usb/phy/modules.order
