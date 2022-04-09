cmd_drivers/ntb/hw/idt/modules.order := {   echo drivers/ntb/hw/idt/ntb_hw_idt.ko; :; } | awk '!x[$$0]++' - > drivers/ntb/hw/idt/modules.order
