cmd_sound/pci/ca0106/modules.order := {   echo sound/pci/ca0106/snd-ca0106.ko; :; } | awk '!x[$$0]++' - > sound/pci/ca0106/modules.order
