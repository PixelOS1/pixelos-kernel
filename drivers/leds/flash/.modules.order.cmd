cmd_drivers/leds/flash/modules.order := {   echo drivers/leds/flash/leds-as3645a.ko;   echo drivers/leds/flash/leds-lm3601x.ko; :; } | awk '!x[$$0]++' - > drivers/leds/flash/modules.order
