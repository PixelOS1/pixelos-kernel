cmd_sound/pci/trident/modules.order := {   echo sound/pci/trident/snd-trident.ko; :; } | awk '!x[$$0]++' - > sound/pci/trident/modules.order
