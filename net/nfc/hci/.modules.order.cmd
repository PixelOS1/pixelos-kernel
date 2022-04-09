cmd_net/nfc/hci/modules.order := {   echo net/nfc/hci/hci.ko; :; } | awk '!x[$$0]++' - > net/nfc/hci/modules.order
