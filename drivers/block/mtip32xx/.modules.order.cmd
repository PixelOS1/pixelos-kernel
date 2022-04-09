cmd_drivers/block/mtip32xx/modules.order := {   echo drivers/block/mtip32xx/mtip32xx.ko; :; } | awk '!x[$$0]++' - > drivers/block/mtip32xx/modules.order
