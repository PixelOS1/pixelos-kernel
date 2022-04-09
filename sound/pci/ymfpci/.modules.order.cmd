cmd_sound/pci/ymfpci/modules.order := {   echo sound/pci/ymfpci/snd-ymfpci.ko; :; } | awk '!x[$$0]++' - > sound/pci/ymfpci/modules.order
