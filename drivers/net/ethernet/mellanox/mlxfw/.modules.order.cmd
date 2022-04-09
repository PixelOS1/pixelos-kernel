cmd_drivers/net/ethernet/mellanox/mlxfw/modules.order := {   echo drivers/net/ethernet/mellanox/mlxfw/mlxfw.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/mellanox/mlxfw/modules.order
