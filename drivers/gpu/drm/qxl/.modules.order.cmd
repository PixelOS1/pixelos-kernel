cmd_drivers/gpu/drm/qxl/modules.order := {   echo drivers/gpu/drm/qxl/qxl.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/qxl/modules.order
