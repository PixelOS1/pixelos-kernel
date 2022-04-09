cmd_drivers/net/ethernet/atheros/alx/modules.order := {   echo drivers/net/ethernet/atheros/alx/alx.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/atheros/alx/modules.order
