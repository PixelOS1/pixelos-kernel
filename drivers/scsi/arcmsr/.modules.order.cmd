cmd_drivers/scsi/arcmsr/modules.order := {   echo drivers/scsi/arcmsr/arcmsr.ko; :; } | awk '!x[$$0]++' - > drivers/scsi/arcmsr/modules.order
