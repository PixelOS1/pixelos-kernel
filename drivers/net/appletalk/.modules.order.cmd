cmd_drivers/net/appletalk/modules.order := {   echo drivers/net/appletalk/ipddp.ko; :; } | awk '!x[$$0]++' - > drivers/net/appletalk/modules.order
