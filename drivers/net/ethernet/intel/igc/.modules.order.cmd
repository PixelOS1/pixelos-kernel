cmd_drivers/net/ethernet/intel/igc/modules.order := {   echo drivers/net/ethernet/intel/igc/igc.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/intel/igc/modules.order
