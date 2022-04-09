cmd_sound/pci/korg1212/modules.order := {   echo sound/pci/korg1212/snd-korg1212.ko; :; } | awk '!x[$$0]++' - > sound/pci/korg1212/modules.order
