cmd_drivers/usb/misc/sisusbvga/modules.order := {   echo drivers/usb/misc/sisusbvga/sisusbvga.ko; :; } | awk '!x[$$0]++' - > drivers/usb/misc/sisusbvga/modules.order
