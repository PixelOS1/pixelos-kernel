cmd_drivers/usb/typec/tipd/modules.order := {   echo drivers/usb/typec/tipd/tps6598x.ko; :; } | awk '!x[$$0]++' - > drivers/usb/typec/tipd/modules.order
