cmd_fs/afs/modules.order := {   echo fs/afs/kafs.ko; :; } | awk '!x[$$0]++' - > fs/afs/modules.order
