cmd_fs/smbfs_common/modules.order := {   echo fs/smbfs_common/cifs_arc4.ko;   echo fs/smbfs_common/cifs_md4.ko; :; } | awk '!x[$$0]++' - > fs/smbfs_common/modules.order
