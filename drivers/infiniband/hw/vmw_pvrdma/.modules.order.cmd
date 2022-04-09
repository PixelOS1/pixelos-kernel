cmd_drivers/infiniband/hw/vmw_pvrdma/modules.order := {   echo drivers/infiniband/hw/vmw_pvrdma/vmw_pvrdma.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/vmw_pvrdma/modules.order
