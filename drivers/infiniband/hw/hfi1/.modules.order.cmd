cmd_drivers/infiniband/hw/hfi1/modules.order := {   echo drivers/infiniband/hw/hfi1/hfi1.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/hfi1/modules.order
