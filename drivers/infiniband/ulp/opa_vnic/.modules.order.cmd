cmd_drivers/infiniband/ulp/opa_vnic/modules.order := {   echo drivers/infiniband/ulp/opa_vnic/opa_vnic.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/ulp/opa_vnic/modules.order
