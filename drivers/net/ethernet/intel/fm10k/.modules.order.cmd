cmd_drivers/net/ethernet/intel/fm10k/modules.order := {   echo drivers/net/ethernet/intel/fm10k/fm10k.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/fm10k/modules.order
