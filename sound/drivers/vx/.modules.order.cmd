cmd_sound/drivers/vx/modules.order := {   echo sound/drivers/vx/snd-vx-lib.ko; :; } | awk '!x[$$0]++' - > sound/drivers/vx/modules.order
