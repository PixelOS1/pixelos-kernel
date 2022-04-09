cmd_drivers/scsi/fcoe/modules.order := {   echo drivers/scsi/fcoe/fcoe.ko;   echo drivers/scsi/fcoe/libfcoe.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/fcoe/modules.order
