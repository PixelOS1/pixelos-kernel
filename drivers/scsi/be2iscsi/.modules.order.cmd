cmd_drivers/scsi/be2iscsi/modules.order := {   echo drivers/scsi/be2iscsi/be2iscsi.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/be2iscsi/modules.order
