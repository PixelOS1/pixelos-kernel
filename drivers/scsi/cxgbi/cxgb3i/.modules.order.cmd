cmd_drivers/scsi/cxgbi/cxgb3i/modules.order := {   echo drivers/scsi/cxgbi/cxgb3i/cxgb3i.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/cxgbi/cxgb3i/modules.order
