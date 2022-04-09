cmd_drivers/target/sbp/modules.order := {   echo drivers/target/sbp/sbp_target.ko; :; } | awk '!x[$$0]++' - > drivers/target/sbp/modules.order
