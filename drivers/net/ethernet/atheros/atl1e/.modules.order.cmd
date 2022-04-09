cmd_drivers/net/ethernet/atheros/atl1e/modules.order := {   echo drivers/net/ethernet/atheros/atl1e/atl1e.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/atheros/atl1e/modules.order
