cmd_sound/drivers/opl3/modules.order := {   echo sound/drivers/opl3/snd-opl3-lib.ko;   echo sound/drivers/opl3/snd-opl3-synth.ko; :; } | awk '!x[$$0]++' - > sound/drivers/opl3/modules.order
