cmd_sound/pci/mixart/modules.order := {   echo sound/pci/mixart/snd-mixart.ko; :; } | awk '!x[$$0]++' - > sound/pci/mixart/modules.order
