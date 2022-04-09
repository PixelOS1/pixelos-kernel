cmd_drivers/dma/dw-edma/modules.order := {   echo drivers/dma/dw-edma/dw-edma.ko;   echo drivers/dma/dw-edma/dw-edma-pcie.ko; :; } | awk '!x[$$0]++' - > drivers/dma/dw-edma/modules.order
