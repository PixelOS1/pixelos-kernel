cmd_drivers/net/ethernet/altera/modules.order := {   echo drivers/net/ethernet/altera/altera_tse.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/altera/modules.order
