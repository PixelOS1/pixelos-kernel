cmd_drivers/net/ethernet/intel/igbvf/modules.order := {   echo drivers/net/ethernet/intel/igbvf/igbvf.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/igbvf/modules.order
