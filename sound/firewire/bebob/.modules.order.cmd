cmd_sound/firewire/bebob/modules.order := {   echo sound/firewire/bebob/snd-bebob.ko; :; } | awk '!x[$$0]++' - > sound/firewire/bebob/modules.order
