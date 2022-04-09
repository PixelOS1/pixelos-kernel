cmd_lib/reed_solomon/modules.order := {   echo lib/reed_solomon/reed_solomon.ko; :; } | awk '!x[$$0]++' - > lib/reed_solomon/modules.order
