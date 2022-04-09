cmd_drivers/pwm/modules.order := {   echo drivers/pwm/pwm-lpss.ko;   echo drivers/pwm/pwm-lpss-pci.ko;   echo drivers/pwm/pwm-lpss-platform.ko; :; } | awk '!x[$$0]++' - > drivers/pwm/modules.order
