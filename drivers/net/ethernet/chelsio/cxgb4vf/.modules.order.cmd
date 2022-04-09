cmd_drivers/net/ethernet/chelsio/cxgb4vf/modules.order := {   echo drivers/net/ethernet/chelsio/cxgb4vf/cxgb4vf.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/chelsio/cxgb4vf/modules.order
