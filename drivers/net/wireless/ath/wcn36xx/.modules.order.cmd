cmd_drivers/net/wireless/ath/wcn36xx/modules.order := {   echo drivers/net/wireless/ath/wcn36xx/wcn36xx.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ath/wcn36xx/modules.order
