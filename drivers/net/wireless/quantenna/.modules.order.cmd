cmd_drivers/net/wireless/quantenna/modules.order := {   cat drivers/net/wireless/quantenna/qtnfmac/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/quantenna/modules.order
