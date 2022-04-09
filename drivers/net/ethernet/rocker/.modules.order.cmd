cmd_drivers/net/ethernet/rocker/modules.order := {   echo drivers/net/ethernet/rocker/rocker.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/rocker/modules.order
