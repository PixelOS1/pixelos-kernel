cmd_drivers/net/ethernet/broadcom/bnxt/modules.order := {   echo drivers/net/ethernet/broadcom/bnxt/bnxt_en.ko; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/broadcom/bnxt/modules.order
