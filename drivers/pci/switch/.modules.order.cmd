cmd_drivers/pci/switch/modules.order := {   echo drivers/pci/switch/switchtec.ko; :; } | awk '!x[$$0]++' - > drivers/pci/switch/modules.order
