cmd_drivers/infiniband/sw/rdmavt/modules.order := {   echo drivers/infiniband/sw/rdmavt/rdmavt.ko; :; } | awk '!x[$$0]++' - > drivers/infiniband/sw/rdmavt/modules.order
