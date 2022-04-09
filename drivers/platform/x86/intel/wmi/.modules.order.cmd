cmd_drivers/platform/x86/intel/wmi/modules.order := {   echo drivers/platform/x86/intel/wmi/intel-wmi-thunderbolt.ko; :; } | awk '!x[$$0]++' - > drivers/platform/x86/intel/wmi/modules.order
