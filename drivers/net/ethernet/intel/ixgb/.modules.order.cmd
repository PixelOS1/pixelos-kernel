cmd_drivers/net/ethernet/intel/ixgb/modules.order := {   echo drivers/net/ethernet/intel/ixgb/ixgb.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/ixgb/modules.order
