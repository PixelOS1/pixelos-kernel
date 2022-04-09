cmd_net/rds/modules.order := {   echo net/rds/rds.ko;   echo net/rds/rds_rdma.ko;   echo net/rds/rds_tcp.ko; :; } | awk '!x[$$0]++' - > net/rds/modules.order
