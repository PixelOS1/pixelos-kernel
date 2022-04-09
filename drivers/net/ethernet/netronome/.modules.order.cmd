cmd_drivers/net/ethernet/netronome/modules.order := {   cat drivers/net/ethernet/netronome/nfp/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/netronome/modules.order
