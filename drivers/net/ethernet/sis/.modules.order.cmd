cmd_drivers/net/ethernet/sis/modules.order := {   echo drivers/net/ethernet/sis/sis190.ko;   echo drivers/net/ethernet/sis/sis900.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/sis/modules.order
