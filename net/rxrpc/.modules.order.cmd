cmd_net/rxrpc/modules.order := {   echo net/rxrpc/rxrpc.ko; :; } | awk '!x[$$0]++' - > net/rxrpc/modules.order
