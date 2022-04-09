cmd_drivers/scsi/libfc/modules.order := {   echo drivers/scsi/libfc/libfc.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/libfc/modules.order
