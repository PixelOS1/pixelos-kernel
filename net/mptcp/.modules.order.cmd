cmd_net/mptcp/modules.order := {   echo net/mptcp/mptcp_diag.ko; :; } | awk '!x[$$0]++' - > net/mptcp/modules.order
