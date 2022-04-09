cmd_fs/lockd/modules.order := {   echo fs/lockd/lockd.ko; :; } | awk '!x[$$0]++' - > fs/lockd/modules.order
