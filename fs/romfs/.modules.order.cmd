cmd_fs/romfs/modules.order := {   echo fs/romfs/romfs.ko; :; } | awk '!x[$$0]++' - > fs/romfs/modules.order
