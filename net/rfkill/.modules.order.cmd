cmd_net/rfkill/modules.order := {   echo net/rfkill/rfkill.ko;   echo net/rfkill/rfkill-gpio.ko; :; } | awk '!x[$$0]++' - > net/rfkill/modules.order
