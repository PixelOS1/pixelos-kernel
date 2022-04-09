cmd_drivers/macintosh/modules.order := {   echo drivers/macintosh/mac_hid.ko; :; } | awk '!x[$$0]++' - > drivers/macintosh/modules.order
