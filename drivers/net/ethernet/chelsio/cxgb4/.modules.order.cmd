cmd_drivers/net/ethernet/chelsio/cxgb4/modules.order := {   echo drivers/net/ethernet/chelsio/cxgb4/cxgb4.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/chelsio/cxgb4/modules.order
