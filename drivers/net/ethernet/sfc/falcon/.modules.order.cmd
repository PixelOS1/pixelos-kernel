cmd_drivers/net/ethernet/sfc/falcon/modules.order := {   echo drivers/net/ethernet/sfc/falcon/sfc-falcon.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/sfc/falcon/modules.order
