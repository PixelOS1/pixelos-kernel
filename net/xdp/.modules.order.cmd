cmd_net/xdp/modules.order := {   echo net/xdp/xsk_diag.ko; :; } | awk '!x[$$0]++' - > net/xdp/modules.order
