cmd_drivers/scsi/libsas/modules.order := {   echo drivers/scsi/libsas/libsas.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/libsas/modules.order
