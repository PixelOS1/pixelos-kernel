cmd_drivers/scsi/sym53c8xx_2/modules.order := {   echo drivers/scsi/sym53c8xx_2/sym53c8xx.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/sym53c8xx_2/modules.order
