cmd_drivers/infiniband/ulp/iser/modules.order := {   echo drivers/infiniband/ulp/iser/ib_iser.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/ulp/iser/modules.order
