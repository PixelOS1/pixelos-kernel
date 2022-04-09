cmd_drivers/net/can/softing/modules.order := {   echo drivers/net/can/softing/softing.ko; :; } | awk '!x[$$0]++' - > drivers/net/can/softing/modules.order
