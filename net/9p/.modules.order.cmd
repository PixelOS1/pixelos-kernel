cmd_net/9p/modules.order := {   echo net/9p/9pnet.ko;   echo net/9p/9pnet_fd.ko;   echo net/9p/9pnet_xen.ko;   echo net/9p/9pnet_rdma.ko; :; } | awk '!x[$$0]++' - > net/9p/modules.order
