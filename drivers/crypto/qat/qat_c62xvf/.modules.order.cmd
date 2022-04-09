cmd_drivers/crypto/qat/qat_c62xvf/modules.order := {   echo drivers/crypto/qat/qat_c62xvf/qat_c62xvf.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_c62xvf/modules.order
