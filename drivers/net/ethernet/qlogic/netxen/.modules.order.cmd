cmd_drivers/net/ethernet/qlogic/netxen/modules.order := {   echo drivers/net/ethernet/qlogic/netxen/netxen_nic.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/qlogic/netxen/modules.order
