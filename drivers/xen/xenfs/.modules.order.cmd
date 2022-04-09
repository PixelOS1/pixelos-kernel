cmd_drivers/xen/xenfs/modules.order := {   echo drivers/xen/xenfs/xenfs.ko; :; } | awk '!x[$$0]++' - > drivers/xen/xenfs/modules.order
