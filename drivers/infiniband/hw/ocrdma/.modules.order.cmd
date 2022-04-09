cmd_drivers/infiniband/hw/ocrdma/modules.order := {   echo drivers/infiniband/hw/ocrdma/ocrdma.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/ocrdma/modules.order
