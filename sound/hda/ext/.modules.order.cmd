cmd_sound/hda/ext/modules.order := {   echo sound/hda/ext/snd-hda-ext-core.ko; :; } | awk '!x[$$0]++' - > sound/hda/ext/modules.order
