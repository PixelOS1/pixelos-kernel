cmd_sound/firewire/fireworks/modules.order := {   echo sound/firewire/fireworks/snd-fireworks.ko; :; } | awk '!x[$$0]++' - > sound/firewire/fireworks/modules.order
