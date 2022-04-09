cmd_fs/sysv/modules.order := {   echo fs/sysv/sysv.ko; :; } | awk '!x[$$0]++' - > fs/sysv/modules.order
