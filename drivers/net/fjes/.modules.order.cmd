cmd_drivers/net/fjes/modules.order := {   echo drivers/net/fjes/fjes.ko; :; } | awk '!x[$$0]++' - > drivers/net/fjes/modules.order
