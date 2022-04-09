cmd_drivers/net/vmxnet3/modules.order := {   echo drivers/net/vmxnet3/vmxnet3.ko; :; } | awk '!x[$$0]++' - > drivers/net/vmxnet3/modules.order
