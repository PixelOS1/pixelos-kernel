cmd_drivers/net/ethernet/pensando/ionic/modules.order := {   echo drivers/net/ethernet/pensando/ionic/ionic.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/pensando/ionic/modules.order
