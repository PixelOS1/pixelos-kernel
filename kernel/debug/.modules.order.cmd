cmd_kernel/debug/modules.order := {  :; } | awk '!x[$$0]++' - > kernel/debug/modules.order
