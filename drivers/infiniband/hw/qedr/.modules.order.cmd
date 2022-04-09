cmd_drivers/infiniband/hw/qedr/modules.order := {   echo drivers/infiniband/hw/qedr/qedr.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/qedr/modules.order
