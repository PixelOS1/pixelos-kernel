cmd_sound/synth/emux/modules.order := {   echo sound/synth/emux/snd-emux-synth.ko; :; } | awk '!x[$$0]++' - > sound/synth/emux/modules.order
