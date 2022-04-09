cmd_fs/pstore/modules.order := {   echo fs/pstore/ramoops.ko;   echo fs/pstore/pstore_zone.ko;   echo fs/pstore/pstore_blk.ko; :; } | awk '!x[$$0]++' - > fs/pstore/modules.order
