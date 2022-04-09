cmd_drivers/infiniband/hw/mlx5/modules.order := {   echo drivers/infiniband/hw/mlx5/mlx5_ib.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/mlx5/modules.order
