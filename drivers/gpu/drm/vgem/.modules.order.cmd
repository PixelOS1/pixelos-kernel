cmd_drivers/gpu/drm/vgem/modules.order := {   echo drivers/gpu/drm/vgem/vgem.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/vgem/modules.order
