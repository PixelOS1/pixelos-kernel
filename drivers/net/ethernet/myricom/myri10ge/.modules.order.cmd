cmd_drivers/net/ethernet/myricom/myri10ge/modules.order := {   echo drivers/net/ethernet/myricom/myri10ge/myri10ge.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/myricom/myri10ge/modules.order
