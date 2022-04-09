cmd_drivers/net/ethernet/chelsio/cxgb3/modules.order := {   echo drivers/net/ethernet/chelsio/cxgb3/cxgb3.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/chelsio/cxgb3/modules.order
