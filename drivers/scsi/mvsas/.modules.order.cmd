cmd_drivers/scsi/mvsas/modules.order := {   echo drivers/scsi/mvsas/mvsas.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/mvsas/modules.order
