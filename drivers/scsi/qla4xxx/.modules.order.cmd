cmd_drivers/scsi/qla4xxx/modules.order := {   echo drivers/scsi/qla4xxx/qla4xxx.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/qla4xxx/modules.order
