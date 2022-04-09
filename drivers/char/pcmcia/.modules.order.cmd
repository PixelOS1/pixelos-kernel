cmd_drivers/char/pcmcia/modules.order := {   echo drivers/char/pcmcia/cm4000_cs.ko;   echo drivers/char/pcmcia/cm4040_cs.ko; :; } | awk '!x[$$0]++' - > drivers/char/pcmcia/modules.order
