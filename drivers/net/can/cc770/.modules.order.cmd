cmd_drivers/net/can/cc770/modules.order := {   echo drivers/net/can/cc770/cc770.ko;   echo drivers/net/can/cc770/cc770_platform.ko; :; } | awk '!x[$$0]++' - > drivers/net/can/cc770/modules.order
