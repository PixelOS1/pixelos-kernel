cmd_drivers/net/ethernet/qlogic/qede/modules.order := {   echo drivers/net/ethernet/qlogic/qede/qede.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/qlogic/qede/modules.order
