cmd_drivers/net/ethernet/intel/ice/modules.order := {   echo drivers/net/ethernet/intel/ice/ice.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/ice/modules.order
