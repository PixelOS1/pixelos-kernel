cmd_drivers/memstick/core/modules.order := {   echo drivers/memstick/core/memstick.ko;   echo drivers/memstick/core/mspro_block.ko; :; } | awk '!x[$$0]++' - > drivers/memstick/core/modules.order
