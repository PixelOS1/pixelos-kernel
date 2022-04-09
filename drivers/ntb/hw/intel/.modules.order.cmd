cmd_drivers/ntb/hw/intel/modules.order := {   echo drivers/ntb/hw/intel/ntb_hw_intel.ko; :; } | awk '!x[$$0]++' - > drivers/ntb/hw/intel/modules.order
