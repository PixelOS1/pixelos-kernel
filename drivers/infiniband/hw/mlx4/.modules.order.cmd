cmd_drivers/infiniband/hw/mlx4/modules.order := {   echo drivers/infiniband/hw/mlx4/mlx4_ib.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/hw/mlx4/modules.order
