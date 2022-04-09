cmd_drivers/net/wireless/ath/wil6210/modules.order := {   echo drivers/net/wireless/ath/wil6210/wil6210.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ath/wil6210/modules.order
