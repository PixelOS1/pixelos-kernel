cmd_fs/vboxsf/modules.order := {   echo fs/vboxsf/vboxsf.ko; :; } | awk '!x[$$0]++' - > fs/vboxsf/modules.order
