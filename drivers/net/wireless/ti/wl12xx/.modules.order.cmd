cmd_drivers/net/wireless/ti/wl12xx/modules.order := {   echo drivers/net/wireless/ti/wl12xx/wl12xx.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ti/wl12xx/modules.order
