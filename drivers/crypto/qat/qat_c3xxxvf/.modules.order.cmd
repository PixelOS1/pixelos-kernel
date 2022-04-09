cmd_drivers/crypto/qat/qat_c3xxxvf/modules.order := {   echo drivers/crypto/qat/qat_c3xxxvf/qat_c3xxxvf.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/qat/qat_c3xxxvf/modules.order
