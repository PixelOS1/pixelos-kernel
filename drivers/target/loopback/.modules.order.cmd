cmd_drivers/target/loopback/modules.order := {   echo drivers/target/loopback/tcm_loop.ko; :; } | awk '!x[$$0]++' - > drivers/target/loopback/modules.order
