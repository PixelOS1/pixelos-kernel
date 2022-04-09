cmd_drivers/net/ethernet/qlogic/qed/modules.order := {   echo drivers/net/ethernet/qlogic/qed/qed.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/qlogic/qed/modules.order
