cmd_drivers/net/ethernet/aquantia/modules.order := {   cat drivers/net/ethernet/aquantia/atlantic/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/aquantia/modules.order
