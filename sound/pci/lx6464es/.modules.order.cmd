cmd_sound/pci/lx6464es/modules.order := {   echo sound/pci/lx6464es/snd-lx6464es.ko; :; } | awk '!x[$$0]++' - > sound/pci/lx6464es/modules.order
