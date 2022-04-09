cmd_drivers/infiniband/hw/bnxt_re/modules.order := {   echo drivers/infiniband/hw/bnxt_re/bnxt_re.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/bnxt_re/modules.order
