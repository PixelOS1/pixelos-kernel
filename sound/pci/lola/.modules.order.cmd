cmd_sound/pci/lola/modules.order := {   echo sound/pci/lola/snd-lola.ko; :; } | awk '!x[$$0]++' - > sound/pci/lola/modules.order
