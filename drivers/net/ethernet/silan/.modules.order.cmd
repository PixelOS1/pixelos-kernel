cmd_drivers/net/ethernet/silan/modules.order := {   echo drivers/net/ethernet/silan/sc92031.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/silan/modules.order
