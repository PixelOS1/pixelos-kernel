cmd_fs/cramfs/modules.order := {   echo fs/cramfs/cramfs.ko; :; } | awk '!x[$$0]++' - > fs/cramfs/modules.order
