cmd_drivers/net/ethernet/adaptec/modules.order := {   echo drivers/net/ethernet/adaptec/starfire.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/adaptec/modules.order
