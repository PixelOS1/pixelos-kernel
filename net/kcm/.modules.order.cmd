cmd_net/kcm/modules.order := {   echo net/kcm/kcm.ko; :; } | awk '!x[$$0]++' - > net/kcm/modules.order
