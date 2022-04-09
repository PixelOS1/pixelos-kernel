cmd_drivers/net/ethernet/cisco/modules.order := {   cat drivers/net/ethernet/cisco/enic/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/cisco/modules.order
