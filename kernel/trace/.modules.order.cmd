cmd_kernel/trace/modules.order := {   echo kernel/trace/ring_buffer_benchmark.ko; :; } | awk '!x[$$0]++' - > kernel/trace/modules.order
