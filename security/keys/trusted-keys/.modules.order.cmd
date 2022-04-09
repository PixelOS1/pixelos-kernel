cmd_security/keys/trusted-keys/modules.order := {   echo security/keys/trusted-keys/trusted.ko; :; } | awk '!x[$$0]++' - > security/keys/trusted-keys/modules.order
