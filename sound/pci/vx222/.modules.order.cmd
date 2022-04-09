cmd_sound/pci/vx222/modules.order := {   echo sound/pci/vx222/snd-vx222.ko; :; } | awk '!x[$$0]++' - > sound/pci/vx222/modules.order
