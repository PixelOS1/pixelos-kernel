cmd_drivers/gpu/drm/i2c/modules.order := {   echo drivers/gpu/drm/i2c/ch7006.ko;   echo drivers/gpu/drm/i2c/sil164.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/i2c/modules.order
