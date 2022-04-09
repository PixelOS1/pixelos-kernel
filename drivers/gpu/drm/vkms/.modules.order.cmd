cmd_drivers/gpu/drm/vkms/modules.order := {   echo drivers/gpu/drm/vkms/vkms.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/vkms/modules.order
