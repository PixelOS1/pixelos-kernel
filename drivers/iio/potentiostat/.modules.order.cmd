cmd_drivers/iio/potentiostat/modules.order := {   echo drivers/iio/potentiostat/lmp91000.ko; :; } | awk '!x[$$0]++' - > drivers/iio/potentiostat/modules.order
