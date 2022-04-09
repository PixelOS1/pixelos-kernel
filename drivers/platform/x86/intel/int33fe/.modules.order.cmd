cmd_drivers/platform/x86/intel/int33fe/modules.order := {   echo drivers/platform/x86/intel/int33fe/intel_cht_int33fe.ko; :; } | awk '!x[$$0]++' - > drivers/platform/x86/intel/int33fe/modules.order
