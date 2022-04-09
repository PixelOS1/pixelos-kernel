cmd_drivers/pci/hotplug/modules.order := {   echo drivers/pci/hotplug/acpiphp_ibm.ko; :; } | awk '!x[$$0]++' - > drivers/pci/hotplug/modules.order
