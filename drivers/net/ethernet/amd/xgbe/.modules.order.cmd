cmd_drivers/net/ethernet/amd/xgbe/modules.order := {   echo drivers/net/ethernet/amd/xgbe/amd-xgbe.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/amd/xgbe/modules.order
