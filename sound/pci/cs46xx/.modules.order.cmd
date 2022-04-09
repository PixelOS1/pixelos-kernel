cmd_sound/pci/cs46xx/modules.order := {   echo sound/pci/cs46xx/snd-cs46xx.ko; :; } | awk '!x[$$0]++' - > sound/pci/cs46xx/modules.order
