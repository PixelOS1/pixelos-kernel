cmd_fs/netfs/modules.order := {   echo fs/netfs/netfs.ko; :; } | awk '!x[$$0]++' - > fs/netfs/modules.order
