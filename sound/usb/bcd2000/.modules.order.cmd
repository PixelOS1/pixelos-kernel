cmd_sound/usb/bcd2000/modules.order := {   echo sound/usb/bcd2000/snd-bcd2000.ko; :; } | awk '!x[$$0]++' - > sound/usb/bcd2000/modules.order
