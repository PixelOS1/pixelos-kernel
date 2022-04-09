cmd_sound/usb/usx2y/modules.order := {   echo sound/usb/usx2y/snd-usb-usx2y.ko;   echo sound/usb/usx2y/snd-usb-us122l.ko; :; } | awk '!x[$$0]++' - > sound/usb/usx2y/modules.order
