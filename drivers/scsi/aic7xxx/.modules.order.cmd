cmd_drivers/scsi/aic7xxx/modules.order := {   echo drivers/scsi/aic7xxx/aic7xxx.ko;   echo drivers/scsi/aic7xxx/aic79xx.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/aic7xxx/modules.order
