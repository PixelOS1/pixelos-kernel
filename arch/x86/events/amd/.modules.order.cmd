cmd_arch/x86/events/amd/modules.order := {   echo arch/x86/events/amd/power.ko; :; } | awk '!x[$$0]++' - > arch/x86/events/amd/modules.order
