cmd_drivers/net/wireless/ath/ath5k/modules.order := {   echo drivers/net/wireless/ath/ath5k/ath5k.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ath/ath5k/modules.order
