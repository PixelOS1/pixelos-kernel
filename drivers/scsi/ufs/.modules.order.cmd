cmd_drivers/scsi/ufs/modules.order := {   echo drivers/scsi/ufs/ufshcd-core.ko;   echo drivers/scsi/ufs/ufshcd-pci.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/ufs/modules.order
