cmd_drivers/scsi/bfa/modules.order := {   echo drivers/scsi/bfa/bfa.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/bfa/modules.order
