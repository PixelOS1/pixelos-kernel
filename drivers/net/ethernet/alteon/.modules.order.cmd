cmd_drivers/net/ethernet/alteon/modules.order := {   echo drivers/net/ethernet/alteon/acenic.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/alteon/modules.order
