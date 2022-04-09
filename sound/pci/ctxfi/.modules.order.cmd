cmd_sound/pci/ctxfi/modules.order := {   echo sound/pci/ctxfi/snd-ctxfi.ko; :; } | awk '!x[$$0]++' - > sound/pci/ctxfi/modules.order
