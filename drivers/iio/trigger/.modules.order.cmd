cmd_drivers/iio/trigger/modules.order := {   echo drivers/iio/trigger/iio-trig-interrupt.ko;   echo drivers/iio/trigger/iio-trig-loop.ko; :; } | awk '!x[$$0]++' - > drivers/iio/trigger/modules.order
