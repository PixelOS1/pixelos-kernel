cmd_drivers/net/ethernet/rdc/modules.order := {   echo drivers/net/ethernet/rdc/r6040.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/rdc/modules.order
