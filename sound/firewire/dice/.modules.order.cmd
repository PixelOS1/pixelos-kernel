cmd_sound/firewire/dice/modules.order := {   echo sound/firewire/dice/snd-dice.ko; :; } | awk '!x[$$0]++' - > sound/firewire/dice/modules.order
