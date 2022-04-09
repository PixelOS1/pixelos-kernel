cmd_drivers/scsi/smartpqi/modules.order := {   echo drivers/scsi/smartpqi/smartpqi.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/smartpqi/modules.order
