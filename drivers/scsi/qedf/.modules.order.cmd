cmd_drivers/scsi/qedf/modules.order := {   echo drivers/scsi/qedf/qedf.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/qedf/modules.order
