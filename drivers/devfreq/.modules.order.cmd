cmd_drivers/devfreq/modules.order := {   echo drivers/devfreq/governor_simpleondemand.ko; :; } | awk '!x[$$0]++' - > drivers/devfreq/modules.order
