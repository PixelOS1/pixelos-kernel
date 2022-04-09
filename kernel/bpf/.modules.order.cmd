cmd_kernel/bpf/modules.order := {   cat kernel/bpf/preload/modules.order; :; } | awk '!x[$$0]++' - > kernel/bpf/modules.order
