cmd_drivers/scsi/lpfc/modules.order := {   echo drivers/scsi/lpfc/lpfc.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/lpfc/modules.order
