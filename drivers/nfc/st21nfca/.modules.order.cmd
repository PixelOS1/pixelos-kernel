cmd_drivers/nfc/st21nfca/modules.order := {   echo drivers/nfc/st21nfca/st21nfca_hci.ko;   echo drivers/nfc/st21nfca/st21nfca_i2c.ko; :; } | awk '!x[$$0]++' - > drivers/nfc/st21nfca/modules.order
