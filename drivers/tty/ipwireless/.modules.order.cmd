cmd_drivers/tty/ipwireless/modules.order := {   echo drivers/tty/ipwireless/ipwireless.ko; :; } | awk '!x[$$0]++' - > drivers/tty/ipwireless/modules.order
