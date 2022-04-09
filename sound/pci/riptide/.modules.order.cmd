cmd_sound/pci/riptide/modules.order := {   echo sound/pci/riptide/snd-riptide.ko; :; } | awk '!x[$$0]++' - > sound/pci/riptide/modules.order
