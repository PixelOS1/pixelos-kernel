cmd_drivers/char/mwave/modules.order := {   echo drivers/char/mwave/mwave.ko; :; } | awk '!x[$$0]++' - > drivers/char/mwave/modules.order
