cmd_drivers/infiniband/ulp/ipoib/modules.order := {   echo drivers/infiniband/ulp/ipoib/ib_ipoib.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/ulp/ipoib/modules.order
