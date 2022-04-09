cmd_fs/affs/modules.order := {   echo fs/affs/affs.ko; :; } | awk '!x[$$0]++' - > fs/affs/modules.order
