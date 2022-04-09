cmd_drivers/crypto/qat/qat_c3xxx/modules.order := {   echo drivers/crypto/qat/qat_c3xxx/qat_c3xxx.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_c3xxx/modules.order
