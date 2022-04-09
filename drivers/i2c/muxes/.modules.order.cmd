cmd_drivers/i2c/muxes/modules.order := {   echo drivers/i2c/muxes/i2c-mux-ltc4306.ko;   echo drivers/i2c/muxes/i2c-mux-mlxcpld.ko; :; } | awk '!x[$$0]++' - > drivers/i2c/muxes/modules.order
