cmd_drivers/net/ethernet/micrel/modules.order := {   echo drivers/net/ethernet/micrel/ksz884x.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/micrel/modules.order
