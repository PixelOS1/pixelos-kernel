cmd_drivers/net/ethernet/emulex/benet/modules.order := {   echo drivers/net/ethernet/emulex/benet/be2net.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/emulex/benet/modules.order
