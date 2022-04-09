cmd_drivers/net/ethernet/neterion/vxge/modules.order := {   echo drivers/net/ethernet/neterion/vxge/vxge.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/neterion/vxge/modules.order
