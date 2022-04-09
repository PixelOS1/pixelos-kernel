cmd_drivers/media/firewire/modules.order := {   echo drivers/media/firewire/firedtv.ko; :; } | awk '!x[$$0]++' - > drivers/media/firewire/modules.order
