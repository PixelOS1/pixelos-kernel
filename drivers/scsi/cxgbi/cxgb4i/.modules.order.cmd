cmd_drivers/scsi/cxgbi/cxgb4i/modules.order := {   echo drivers/scsi/cxgbi/cxgb4i/cxgb4i.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/cxgbi/cxgb4i/modules.order
