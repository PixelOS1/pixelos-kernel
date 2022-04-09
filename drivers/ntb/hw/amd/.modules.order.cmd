cmd_drivers/ntb/hw/amd/modules.order := {   echo drivers/ntb/hw/amd/ntb_hw_amd.ko; :; } | awk '!x[$$0]++' - > drivers/ntb/hw/amd/modules.order
