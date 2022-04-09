cmd_net/ife/modules.order := {   echo net/ife/ife.ko; :; } | awk '!x[$$0]++' - > net/ife/modules.order
