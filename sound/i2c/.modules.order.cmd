cmd_sound/i2c/modules.order := {   cat sound/i2c/other/modules.order;   echo sound/i2c/snd-cs8427.ko;   echo sound/i2c/snd-i2c.ko; :; } | awk '!x[$$0]++' - > sound/i2c/modules.order
