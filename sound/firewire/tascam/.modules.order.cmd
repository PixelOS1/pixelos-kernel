cmd_sound/firewire/tascam/modules.order := {   echo sound/firewire/tascam/snd-firewire-tascam.ko; :; } | awk '!x[$$0]++' - > sound/firewire/tascam/modules.order
