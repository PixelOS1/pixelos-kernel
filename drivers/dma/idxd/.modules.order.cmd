cmd_drivers/dma/idxd/modules.order := {   echo drivers/dma/idxd/idxd.ko;   echo drivers/dma/idxd/idxd_bus.ko; :; } | awk '!x[$$0]++' - > drivers/dma/idxd/modules.order
