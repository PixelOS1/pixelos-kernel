cmd_drivers/xen/xen-pciback/modules.order := {   echo drivers/xen/xen-pciback/xen-pciback.ko; :; } | awk '!x[$$0]++' - > drivers/xen/xen-pciback/modules.order
