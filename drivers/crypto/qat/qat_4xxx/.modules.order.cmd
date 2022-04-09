cmd_drivers/crypto/qat/qat_4xxx/modules.order := {   echo drivers/crypto/qat/qat_4xxx/qat_4xxx.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_4xxx/modules.order
