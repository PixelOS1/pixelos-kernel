cmd_drivers/net/ethernet/intel/ixgbevf/modules.order := {   echo drivers/net/ethernet/intel/ixgbevf/ixgbevf.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/ixgbevf/modules.order
