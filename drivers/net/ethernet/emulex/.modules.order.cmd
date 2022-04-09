cmd_drivers/net/ethernet/emulex/modules.order := {   cat drivers/net/ethernet/emulex/benet/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/emulex/modules.order
