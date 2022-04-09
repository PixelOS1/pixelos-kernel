cmd_drivers/scsi/esas2r/modules.order := {   echo drivers/scsi/esas2r/esas2r.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/esas2r/modules.order
