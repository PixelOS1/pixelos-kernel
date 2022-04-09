cmd_drivers/net/ethernet/cisco/enic/modules.order := {   echo drivers/net/ethernet/cisco/enic/enic.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/cisco/enic/modules.order
