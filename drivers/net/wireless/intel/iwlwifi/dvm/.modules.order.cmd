cmd_drivers/net/wireless/intel/iwlwifi/dvm/modules.order := {   echo drivers/net/wireless/intel/iwlwifi/dvm/iwldvm.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/intel/iwlwifi/dvm/modules.order
