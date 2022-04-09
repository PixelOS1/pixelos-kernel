cmd_net/smc/modules.order := {   echo net/smc/smc.ko;   echo net/smc/smc_diag.ko; :; } | awk '!x[$$0]++' - > net/smc/modules.order
