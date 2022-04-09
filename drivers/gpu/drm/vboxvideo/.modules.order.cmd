cmd_drivers/gpu/drm/vboxvideo/modules.order := {   echo drivers/gpu/drm/vboxvideo/vboxvideo.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/vboxvideo/modules.order
