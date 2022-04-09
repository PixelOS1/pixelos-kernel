cmd_sound/pci/asihpi/modules.order := {   echo sound/pci/asihpi/snd-asihpi.ko; :; } | awk '!x[$$0]++' - > sound/pci/asihpi/modules.order
