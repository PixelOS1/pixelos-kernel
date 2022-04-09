cmd_drivers/net/ethernet/intel/iavf/modules.order := {   echo drivers/net/ethernet/intel/iavf/iavf.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/iavf/modules.order
