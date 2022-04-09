cmd_drivers/iio/dac/modules.order := {   echo drivers/iio/dac/ltc1660.ko;   echo drivers/iio/dac/ti-dac7311.ko; :; } | awk '!x[$$0]++' - > drivers/iio/dac/modules.order
