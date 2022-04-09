cmd_drivers/infiniband/hw/qib/modules.order := {   echo drivers/infiniband/hw/qib/ib_qib.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/qib/modules.order
