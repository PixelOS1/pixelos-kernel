cmd_sound/isa/sb/modules.order := {   echo sound/isa/sb/snd-sb-common.ko; :; } | awk '!x[$$0]++' - > sound/isa/sb/modules.order
