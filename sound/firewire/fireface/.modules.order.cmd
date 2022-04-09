cmd_sound/firewire/fireface/modules.order := {   echo sound/firewire/fireface/snd-fireface.ko; :; } | awk '!x[$$0]++' - > sound/firewire/fireface/modules.order
