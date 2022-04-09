cmd_lib/pldmfw/modules.order := {  :; } | awk '!x[$$0]++' - > lib/pldmfw/modules.order
