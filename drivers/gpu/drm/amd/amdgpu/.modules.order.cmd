cmd_drivers/gpu/drm/amd/amdgpu/modules.order := {   echo drivers/gpu/drm/amd/amdgpu/amdgpu.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/amd/amdgpu/modules.order
