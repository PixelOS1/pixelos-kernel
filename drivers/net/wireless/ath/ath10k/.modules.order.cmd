cmd_drivers/net/wireless/ath/ath10k/modules.order := {   echo drivers/net/wireless/ath/ath10k/ath10k_core.ko;   echo drivers/net/wireless/ath/ath10k/ath10k_pci.ko;   echo drivers/net/wireless/ath/ath10k/ath10k_sdio.ko;   echo drivers/net/wireless/ath/ath10k/ath10k_usb.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ath/ath10k/modules.order