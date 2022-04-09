cmd_drivers/gpu/drm/radeon/modules.order := {   echo drivers/gpu/drm/radeon/radeon.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/radeon/modules.order
