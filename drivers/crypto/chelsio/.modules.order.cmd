cmd_drivers/crypto/chelsio/modules.order := {   echo drivers/crypto/chelsio/chcr.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/chelsio/modules.order
