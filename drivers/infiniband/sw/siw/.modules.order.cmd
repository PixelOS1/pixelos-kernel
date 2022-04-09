cmd_drivers/infiniband/sw/siw/modules.order := {   echo drivers/infiniband/sw/siw/siw.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/sw/siw/modules.order
