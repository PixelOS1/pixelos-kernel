cmd_drivers/crypto/ccp/modules.order := {   echo drivers/crypto/ccp/ccp.ko;   echo drivers/crypto/ccp/ccp-crypto.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/ccp/modules.order
