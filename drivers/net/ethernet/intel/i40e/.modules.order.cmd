cmd_drivers/net/ethernet/intel/i40e/modules.order := {   echo drivers/net/ethernet/intel/i40e/i40e.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/i40e/modules.order
