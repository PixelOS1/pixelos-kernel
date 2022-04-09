cmd_drivers/scsi/snic/modules.order := {   echo drivers/scsi/snic/snic.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/snic/modules.order
