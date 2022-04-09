cmd_drivers/net/ethernet/xircom/modules.order := {   echo drivers/net/ethernet/xircom/xirc2ps_cs.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/xircom/modules.order
