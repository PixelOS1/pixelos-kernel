cmd_kernel/bpf/preload/modules.order := {   echo kernel/bpf/preload/bpf_preload.ko; :; } | awk '!x[$$0]++' - > kernel/bpf/preload/modules.order
