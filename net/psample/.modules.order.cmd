cmd_net/psample/modules.order := {   echo net/psample/psample.ko; :; } | awk '!x[$$0]++' - > net/psample/modules.order
