cmd_drivers/net/ethernet/amazon/ena/modules.order := {   echo drivers/net/ethernet/amazon/ena/ena.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/amazon/ena/modules.order
