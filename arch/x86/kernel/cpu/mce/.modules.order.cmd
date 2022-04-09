cmd_arch/x86/kernel/cpu/mce/modules.order := {   echo arch/x86/kernel/cpu/mce/mce-inject.ko; :; } | awk '!x[$$0]++' - > arch/x86/kernel/cpu/mce/modules.order
