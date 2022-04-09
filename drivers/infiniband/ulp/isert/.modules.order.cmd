cmd_drivers/infiniband/ulp/isert/modules.order := {   echo drivers/infiniband/ulp/isert/ib_isert.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/ulp/isert/modules.order
