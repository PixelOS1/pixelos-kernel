cmd_drivers/mux/modules.order := {   echo drivers/mux/mux-core.ko; :; } | awk '!x[$$0]++' - > drivers/mux/modules.order
