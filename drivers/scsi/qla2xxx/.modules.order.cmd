cmd_drivers/scsi/qla2xxx/modules.order := {   echo drivers/scsi/qla2xxx/qla2xxx.ko;   echo drivers/scsi/qla2xxx/tcm_qla2xxx.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/qla2xxx/modules.order
