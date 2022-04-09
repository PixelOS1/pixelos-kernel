cmd_drivers/usb/typec/mux/modules.order := {   echo drivers/usb/typec/mux/pi3usb30532.ko; :; } | awk '!x[$$0]++' - > drivers/usb/typec/mux/modules.order
