cmd_drivers/scsi/fnic/modules.order := {   echo drivers/scsi/fnic/fnic.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/fnic/modules.order
