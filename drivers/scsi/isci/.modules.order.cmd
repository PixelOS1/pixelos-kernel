cmd_drivers/scsi/isci/modules.order := {   echo drivers/scsi/isci/isci.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/isci/modules.order
