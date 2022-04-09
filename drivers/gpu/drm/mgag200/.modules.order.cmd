cmd_drivers/gpu/drm/mgag200/modules.order := {   echo drivers/gpu/drm/mgag200/mgag200.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/mgag200/modules.order
