cmd_net/sunrpc/xprtrdma/modules.order := {   echo net/sunrpc/xprtrdma/rpcrdma.ko; :; } | awk '!x[$$0]++' - > net/sunrpc/xprtrdma/modules.order
