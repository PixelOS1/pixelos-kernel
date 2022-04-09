cmd_drivers/crypto/qat/qat_dh895xccvf/modules.order := {   echo drivers/crypto/qat/qat_dh895xccvf/qat_dh895xccvf.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_dh895xccvf/modules.order
