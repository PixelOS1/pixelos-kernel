cmd_drivers/misc/sgi-gru/modules.order := {   echo drivers/misc/sgi-gru/gru.ko; :; } | awk '!x[$$0]++' - > drivers/misc/sgi-gru/modules.order
