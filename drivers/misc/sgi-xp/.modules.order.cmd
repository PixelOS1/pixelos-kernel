cmd_drivers/misc/sgi-xp/modules.order := {   echo drivers/misc/sgi-xp/xp.ko;   echo drivers/misc/sgi-xp/xpc.ko;   echo drivers/misc/sgi-xp/xpnet.ko; :; } | awk '!x[$$0]++' - > drivers/misc/sgi-xp/modules.order