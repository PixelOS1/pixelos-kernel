cmd_drivers/net/phy/mscc/modules.order := {   echo drivers/net/phy/mscc/mscc.ko; :; } | awk '!x[$$0]++' - > drivers/net/phy/mscc/modules.order
