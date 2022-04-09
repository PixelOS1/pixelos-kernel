cmd_sound/pci/nm256/modules.order := {   echo sound/pci/nm256/snd-nm256.ko; :; } | awk '!x[$$0]++' - > sound/pci/nm256/modules.order
