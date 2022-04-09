cmd_drivers/nfc/nfcmrvl/modules.order := {   echo drivers/nfc/nfcmrvl/nfcmrvl.ko;   echo drivers/nfc/nfcmrvl/nfcmrvl_usb.ko; :; } | awk '!x[$$0]++' - > drivers/nfc/nfcmrvl/modules.order
