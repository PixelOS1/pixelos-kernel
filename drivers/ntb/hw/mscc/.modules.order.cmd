cmd_drivers/ntb/hw/mscc/modules.order := {   echo drivers/ntb/hw/mscc/ntb_hw_switchtec.ko; :; } | awk '!x[$$0]++' - > drivers/ntb/hw/mscc/modules.order
