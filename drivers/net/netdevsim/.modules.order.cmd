cmd_drivers/net/netdevsim/modules.order := {   echo drivers/net/netdevsim/netdevsim.ko; :; } | awk '!x[$$0]++' - > drivers/net/netdevsim/modules.order
