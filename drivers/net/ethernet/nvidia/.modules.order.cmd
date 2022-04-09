cmd_drivers/net/ethernet/nvidia/modules.order := {   echo drivers/net/ethernet/nvidia/forcedeth.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/nvidia/modules.order
