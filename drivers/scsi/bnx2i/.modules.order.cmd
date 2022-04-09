cmd_drivers/scsi/bnx2i/modules.order := {   echo drivers/scsi/bnx2i/bnx2i.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/bnx2i/modules.order
