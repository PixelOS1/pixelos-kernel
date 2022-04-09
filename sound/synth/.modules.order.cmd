cmd_sound/synth/modules.order := {   echo sound/synth/snd-util-mem.ko;   cat sound/synth/emux/modules.order; :; } | awk '!x[$$0]++' - > sound/synth/modules.order
