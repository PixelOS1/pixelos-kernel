cmd_sound/pci/ali5451/modules.order := {   echo sound/pci/ali5451/snd-ali5451.ko; :; } | awk '!x[$$0]++' - > sound/pci/ali5451/modules.order
