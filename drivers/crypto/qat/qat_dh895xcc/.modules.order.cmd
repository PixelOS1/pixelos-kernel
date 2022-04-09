cmd_drivers/crypto/qat/qat_dh895xcc/modules.order := {   echo drivers/crypto/qat/qat_dh895xcc/qat_dh895xcc.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_dh895xcc/modules.order
