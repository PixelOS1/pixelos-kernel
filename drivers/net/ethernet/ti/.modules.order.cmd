cmd_drivers/net/ethernet/ti/modules.order := {   echo drivers/net/ethernet/ti/tlan.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/ti/modules.order
