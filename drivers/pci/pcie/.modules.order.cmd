cmd_drivers/pci/pcie/modules.order := {   echo drivers/pci/pcie/aer_inject.ko; :; } | awk '!x[$$0]++' - > drivers/pci/pcie/modules.order
