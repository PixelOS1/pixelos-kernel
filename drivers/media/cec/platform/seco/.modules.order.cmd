cmd_drivers/media/cec/platform/seco/modules.order := {   echo drivers/media/cec/platform/seco/seco-cec.ko; :; } | awk '!x[$$0]++' - > drivers/media/cec/platform/seco/modules.order
