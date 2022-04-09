cmd_drivers/iio/proximity/modules.order := {   echo drivers/iio/proximity/mb1232.ko;   echo drivers/iio/proximity/vl53l0x-i2c.ko; :; } | awk '!x[$$0]++' - > drivers/iio/proximity/modules.order
