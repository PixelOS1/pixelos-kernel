cmd_drivers/scsi/csiostor/modules.order := {   echo drivers/scsi/csiostor/csiostor.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/csiostor/modules.order
