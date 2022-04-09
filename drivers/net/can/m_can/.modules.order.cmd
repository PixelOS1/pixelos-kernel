cmd_drivers/net/can/m_can/modules.order := {   echo drivers/net/can/m_can/m_can.ko; :; } | awk '!x[$$0]++' - > drivers/net/can/m_can/modules.order
