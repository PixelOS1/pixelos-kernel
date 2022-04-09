cmd_drivers/media/radio/modules.order := {   echo drivers/media/radio/tea575x.ko; :; } | awk '!x[$$0]++' - > drivers/media/radio/modules.order
