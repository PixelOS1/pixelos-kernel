cmd_drivers/net/ethernet/qlogic/qlcnic/modules.order := {   echo drivers/net/ethernet/qlogic/qlcnic/qlcnic.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/qlogic/qlcnic/modules.order
