cmd_drivers/net/pcs/modules.order := {   echo drivers/net/pcs/pcs_xpcs.ko; :; } | awk '!x[$$0]++' - > drivers/net/pcs/modules.order
