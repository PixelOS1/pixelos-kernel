cmd_drivers/net/ethernet/intel/e1000e/modules.order := {   echo drivers/net/ethernet/intel/e1000e/e1000e.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/e1000e/modules.order
