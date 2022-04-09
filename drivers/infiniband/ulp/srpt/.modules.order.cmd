cmd_drivers/infiniband/ulp/srpt/modules.order := {   echo drivers/infiniband/ulp/srpt/ib_srpt.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/ulp/srpt/modules.order
