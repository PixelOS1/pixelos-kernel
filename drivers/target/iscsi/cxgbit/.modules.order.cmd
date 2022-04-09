cmd_drivers/target/iscsi/cxgbit/modules.order := {   echo drivers/target/iscsi/cxgbit/cxgbit.ko; :; } | awk '!x[$$0]++' - > drivers/target/iscsi/cxgbit/modules.order
