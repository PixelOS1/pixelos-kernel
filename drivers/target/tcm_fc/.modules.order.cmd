cmd_drivers/target/tcm_fc/modules.order := {   echo drivers/target/tcm_fc/tcm_fc.ko; :; } | awk '!x[$$0]++' - > drivers/target/tcm_fc/modules.order
