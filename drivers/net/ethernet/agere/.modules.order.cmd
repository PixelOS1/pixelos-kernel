cmd_drivers/net/ethernet/agere/modules.order := {   echo drivers/net/ethernet/agere/et131x.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/agere/modules.order
