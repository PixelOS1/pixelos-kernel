cmd_drivers/crypto/qat/qat_common/modules.order := {   echo drivers/crypto/qat/qat_common/intel_qat.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_common/modules.order
