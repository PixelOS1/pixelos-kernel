cmd_drivers/infiniband/hw/mthca/modules.order := {   echo drivers/infiniband/hw/mthca/ib_mthca.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/mthca/modules.order
