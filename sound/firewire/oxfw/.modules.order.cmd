cmd_sound/firewire/oxfw/modules.order := {   echo sound/firewire/oxfw/snd-oxfw.ko; :; } | awk '!x[$$0]++' - > sound/firewire/oxfw/modules.order
