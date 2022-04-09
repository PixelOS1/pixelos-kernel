cmd_drivers/cpuidle/modules.order := {   cat drivers/cpuidle/governors/modules.order;   echo drivers/cpuidle/cpuidle-haltpoll.ko; :; } | awk '!x[$$0]++' - > drivers/cpuidle/modules.order
