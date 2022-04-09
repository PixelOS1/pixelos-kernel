cmd_sound/firewire/digi00x/modules.order := {   echo sound/firewire/digi00x/snd-firewire-digi00x.ko; :; } | awk '!x[$$0]++' - > sound/firewire/digi00x/modules.order
