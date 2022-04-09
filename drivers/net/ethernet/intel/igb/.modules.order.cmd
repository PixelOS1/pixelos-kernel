cmd_drivers/net/ethernet/intel/igb/modules.order := {   echo drivers/net/ethernet/intel/igb/igb.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/igb/modules.order
