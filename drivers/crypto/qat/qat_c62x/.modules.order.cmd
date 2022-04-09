cmd_drivers/crypto/qat/qat_c62x/modules.order := {   echo drivers/crypto/qat/qat_c62x/qat_c62x.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_c62x/modules.order
