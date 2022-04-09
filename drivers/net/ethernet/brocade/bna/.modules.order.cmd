cmd_drivers/net/ethernet/brocade/bna/modules.order := {   echo drivers/net/ethernet/brocade/bna/bna.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/brocade/bna/modules.order
