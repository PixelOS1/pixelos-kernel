cmd_sound/firewire/motu/modules.order := {   echo sound/firewire/motu/snd-firewire-motu.ko; :; } | awk '!x[$$0]++' - > sound/firewire/motu/modules.order
