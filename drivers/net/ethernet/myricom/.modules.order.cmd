cmd_drivers/net/ethernet/myricom/modules.order := {   cat drivers/net/ethernet/myricom/myri10ge/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/myricom/modules.order
