cmd_fs/fscache/modules.order := {   echo fs/fscache/fscache.ko; :; } | awk '!x[$$0]++' - > fs/fscache/modules.order
