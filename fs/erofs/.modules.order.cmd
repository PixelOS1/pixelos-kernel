cmd_fs/erofs/modules.order := {   echo fs/erofs/erofs.ko; :; } | awk '!x[$$0]++' - > fs/erofs/modules.order
