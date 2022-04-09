cmd_fs/minix/modules.order := {   echo fs/minix/minix.ko; :; } | awk '!x[$$0]++' - > fs/minix/modules.order
