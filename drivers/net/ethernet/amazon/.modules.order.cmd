cmd_drivers/net/ethernet/amazon/modules.order := {   cat drivers/net/ethernet/amazon/ena/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/amazon/modules.order
