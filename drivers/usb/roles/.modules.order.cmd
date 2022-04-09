cmd_drivers/usb/roles/modules.order := {   echo drivers/usb/roles/roles.ko;   echo drivers/usb/roles/intel-xhci-usb-role-switch.ko; :; } | awk '!x[$$0]++' - > drivers/usb/roles/modules.order
