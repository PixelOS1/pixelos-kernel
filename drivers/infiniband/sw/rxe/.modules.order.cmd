cmd_drivers/infiniband/sw/rxe/modules.order := {   echo drivers/infiniband/sw/rxe/rdma_rxe.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/sw/rxe/modules.order
