cmd_drivers/nfc/microread/modules.order := {   echo drivers/nfc/microread/microread.ko;   echo drivers/nfc/microread/microread_i2c.ko;   echo drivers/nfc/microread/microread_mei.ko; :; } | awk '!x[$$0]++' - > drivers/nfc/microread/modules.order