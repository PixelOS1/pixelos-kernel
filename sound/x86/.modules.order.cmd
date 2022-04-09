cmd_sound/x86/modules.order := {   echo sound/x86/snd-hdmi-lpe-audio.ko; :; } | awk '!x[$$0]++' - > sound/x86/modules.order
