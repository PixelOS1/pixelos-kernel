cmd_drivers/nfc/nxp-nci/modules.order := {   echo drivers/nfc/nxp-nci/nxp-nci.ko;   echo drivers/nfc/nxp-nci/nxp-nci_i2c.ko; :; } | awk '!x[$$0]++' - > drivers/nfc/nxp-nci/modules.order
