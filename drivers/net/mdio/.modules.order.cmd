cmd_drivers/net/mdio/modules.order := {   echo drivers/net/mdio/acpi_mdio.ko;   echo drivers/net/mdio/fwnode_mdio.ko;   echo drivers/net/mdio/mdio-bcm-unimac.ko;   echo drivers/net/mdio/mdio-bitbang.ko;   echo drivers/net/mdio/mdio-i2c.ko; :; } | awk '!x[$$0]++' - > drivers/net/mdio/modules.order