cmd_drivers/iio/filter/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/iio/filter/modules.order
