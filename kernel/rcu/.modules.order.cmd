cmd_kernel/rcu/modules.order := {   echo kernel/rcu/rcutorture.ko; :; } | awk '!x[$$0]++' - > kernel/rcu/modules.order
