cmd_drivers/infiniband/hw/efa/modules.order := {   echo drivers/infiniband/hw/efa/efa.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/efa/modules.order
