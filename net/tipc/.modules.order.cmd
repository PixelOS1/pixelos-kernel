cmd_net/tipc/modules.order := {   echo net/tipc/tipc.ko;   echo net/tipc/diag.ko; :; } | awk '!x[$$0]++' - > net/tipc/modules.order
