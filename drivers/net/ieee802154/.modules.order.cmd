cmd_drivers/net/ieee802154/modules.order := {   echo drivers/net/ieee802154/fakelb.ko;   echo drivers/net/ieee802154/at86rf230.ko;   echo drivers/net/ieee802154/mrf24j40.ko;   echo drivers/net/ieee802154/cc2520.ko;   echo drivers/net/ieee802154/atusb.ko;   echo drivers/net/ieee802154/adf7242.ko;   echo drivers/net/ieee802154/ca8210.ko;   echo drivers/net/ieee802154/mcr20a.ko; :; } | awk '!x[$$0]++' - > drivers/net/ieee802154/modules.order