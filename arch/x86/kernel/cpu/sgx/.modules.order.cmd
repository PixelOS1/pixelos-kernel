cmd_arch/x86/kernel/cpu/sgx/modules.order := {  :; } | awk '!x[$$0]++' - > arch/x86/kernel/cpu/sgx/modules.order
