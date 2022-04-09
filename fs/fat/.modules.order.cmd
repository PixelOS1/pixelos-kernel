cmd_fs/fat/modules.order := {   echo fs/fat/fat.ko;   echo fs/fat/vfat.ko;   echo fs/fat/msdos.ko; :; } | awk '!x[$$0]++' - > fs/fat/modules.order
