cmd_sound/soc/hisilicon/modules.order := {   echo sound/soc/hisilicon/hi6210-i2s.ko; :; } | awk '!x[$$0]++' - > sound/soc/hisilicon/modules.order
