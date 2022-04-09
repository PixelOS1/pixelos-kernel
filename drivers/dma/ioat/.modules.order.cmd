cmd_drivers/dma/ioat/modules.order := {   echo drivers/dma/ioat/ioatdma.ko; :; } | awk '!x[$$0]++' - > drivers/dma/ioat/modules.order
