cmd_drivers/net/wireless/st/modules.order := {   cat drivers/net/wireless/st/cw1200/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/st/modules.order
