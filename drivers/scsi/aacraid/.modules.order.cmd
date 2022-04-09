cmd_drivers/scsi/aacraid/modules.order := {   echo drivers/scsi/aacraid/aacraid.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/aacraid/modules.order
