cmd_drivers/infiniband/hw/cxgb4/modules.order := {   echo drivers/infiniband/hw/cxgb4/iw_cxgb4.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/cxgb4/modules.order
