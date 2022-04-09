cmd_fs/ufs/modules.order := {   echo fs/ufs/ufs.ko; :; } | awk '!x[$$0]++' - > fs/ufs/modules.order
