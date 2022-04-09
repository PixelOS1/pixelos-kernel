cmd_drivers/net/ethernet/tehuti/modules.order := {   echo drivers/net/ethernet/tehuti/tehuti.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/tehuti/modules.order
