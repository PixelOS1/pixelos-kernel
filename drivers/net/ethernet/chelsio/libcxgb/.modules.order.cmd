cmd_drivers/net/ethernet/chelsio/libcxgb/modules.order := {   echo drivers/net/ethernet/chelsio/libcxgb/libcxgb.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/chelsio/libcxgb/modules.order
