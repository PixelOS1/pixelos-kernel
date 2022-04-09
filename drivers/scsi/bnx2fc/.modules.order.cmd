cmd_drivers/scsi/bnx2fc/modules.order := {   echo drivers/scsi/bnx2fc/bnx2fc.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/bnx2fc/modules.order
