cmd_drivers/infiniband/hw/usnic/modules.order := {   echo drivers/infiniband/hw/usnic/usnic_verbs.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/usnic/modules.order
