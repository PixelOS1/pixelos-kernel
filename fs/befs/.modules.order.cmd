cmd_fs/befs/modules.order := {   echo fs/befs/befs.ko; :; } | awk '!x[$$0]++' - > fs/befs/modules.order
