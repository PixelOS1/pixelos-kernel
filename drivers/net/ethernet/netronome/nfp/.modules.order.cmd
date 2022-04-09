cmd_drivers/net/ethernet/netronome/nfp/modules.order := {   echo drivers/net/ethernet/netronome/nfp/nfp.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/netronome/nfp/modules.order
