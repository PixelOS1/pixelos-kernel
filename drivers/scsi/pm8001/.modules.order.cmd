cmd_drivers/scsi/pm8001/modules.order := {   echo drivers/scsi/pm8001/pm80xx.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/pm8001/modules.order
