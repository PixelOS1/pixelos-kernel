cmd_net/mpls/modules.order := {   echo net/mpls/mpls_gso.ko;   echo net/mpls/mpls_router.ko;   echo net/mpls/mpls_iptunnel.ko; :; } | awk '!x[$$0]++' - > net/mpls/modules.order
