cmd_net/core/modules.order := {   echo net/core/pktgen.ko;   echo net/core/selftests.ko;   echo net/core/failover.ko; :; } | awk '!x[$$0]++' - > net/core/modules.order
