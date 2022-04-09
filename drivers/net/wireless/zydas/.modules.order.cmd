cmd_drivers/net/wireless/zydas/modules.order := {   cat drivers/net/wireless/zydas/zd1211rw/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/zydas/modules.order
