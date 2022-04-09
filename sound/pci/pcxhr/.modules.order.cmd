cmd_sound/pci/pcxhr/modules.order := {   echo sound/pci/pcxhr/snd-pcxhr.ko; :; } | awk '!x[$$0]++' - > sound/pci/pcxhr/modules.order
