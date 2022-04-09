cmd_drivers/dca/modules.order := {   echo drivers/dca/dca.ko; :; } | awk '!x[$$0]++' - > drivers/dca/modules.order
