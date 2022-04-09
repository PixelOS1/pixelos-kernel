cmd_drivers/net/ethernet/pensando/modules.order := {   cat drivers/net/ethernet/pensando/ionic/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/pensando/modules.order
