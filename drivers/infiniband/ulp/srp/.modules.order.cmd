cmd_drivers/infiniband/ulp/srp/modules.order := {   echo drivers/infiniband/ulp/srp/ib_srp.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/ulp/srp/modules.order
