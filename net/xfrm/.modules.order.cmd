cmd_net/xfrm/modules.order := {   echo net/xfrm/xfrm_ipcomp.ko;   echo net/xfrm/xfrm_interface.ko; :; } | awk '!x[$$0]++' - > net/xfrm/modules.order
