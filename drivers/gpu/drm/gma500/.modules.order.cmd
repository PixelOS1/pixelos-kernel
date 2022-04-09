cmd_drivers/gpu/drm/gma500/modules.order := {   echo drivers/gpu/drm/gma500/gma500_gfx.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/gma500/modules.order
