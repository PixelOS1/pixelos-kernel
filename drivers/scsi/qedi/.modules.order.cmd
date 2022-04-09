cmd_drivers/scsi/qedi/modules.order := {   echo drivers/scsi/qedi/qedi.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/qedi/modules.order
