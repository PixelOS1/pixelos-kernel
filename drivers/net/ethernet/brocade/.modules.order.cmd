cmd_drivers/net/ethernet/brocade/modules.order := {   cat drivers/net/ethernet/brocade/bna/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/brocade/modules.order
