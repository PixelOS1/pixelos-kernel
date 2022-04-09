cmd_drivers/extcon/modules.order := {   echo drivers/extcon/extcon-axp288.ko;   echo drivers/extcon/extcon-intel-int3496.ko; :; } | awk '!x[$$0]++' - > drivers/extcon/modules.order
