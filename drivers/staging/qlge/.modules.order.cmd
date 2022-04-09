cmd_drivers/staging/qlge/modules.order := {   echo drivers/staging/qlge/qlge.ko; :; } | awk '!x[$$0]++' - > drivers/staging/qlge/modules.order
