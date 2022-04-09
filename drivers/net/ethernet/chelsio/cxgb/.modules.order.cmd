cmd_drivers/net/ethernet/chelsio/cxgb/modules.order := {   echo drivers/net/ethernet/chelsio/cxgb/cxgb.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/chelsio/cxgb/modules.order
