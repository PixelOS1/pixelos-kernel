cmd_drivers/gpu/drm/modules.order := {   cat drivers/gpu/drm/arm/modules.order;   cat drivers/gpu/drm/rcar-du/modules.order;   cat drivers/gpu/drm/omapdrm/modules.order;   cat drivers/gpu/drm/tilcdc/modules.order;   cat drivers/gpu/drm/imx/modules.order;   cat drivers/gpu/drm/i2c/modules.order;   cat drivers/gpu/drm/panel/modules.order;   cat drivers/gpu/drm/bridge/modules.order;   cat drivers/gpu/drm/hisilicon/modules.order;   cat drivers/gpu/drm/tiny/modules.order;   cat drivers/gpu/drm/xlnx/modules.order;   cat drivers/gpu/drm/gud/modules.order;   echo drivers/gpu/drm/drm_shmem_helper.ko;   echo drivers/gpu/drm/drm_vram_helper.ko;   echo drivers/gpu/drm/drm_ttm_helper.ko;   echo drivers/gpu/drm/drm_kms_helper.ko;   echo drivers/gpu/drm/drm.ko;   cat drivers/gpu/drm/ttm/modules.order;   cat drivers/gpu/drm/scheduler/modules.order;   cat drivers/gpu/drm/radeon/modules.order;   cat drivers/gpu/drm/amd/amdgpu/modules.order;   cat drivers/gpu/drm/i915/modules.order;   cat drivers/gpu/drm/mgag200/modules.order;   cat drivers/gpu/drm/vmwgfx/modules.order;   cat drivers/gpu/drm/vgem/modules.order;   cat drivers/gpu/drm/vkms/modules.order;   cat drivers/gpu/drm/gma500/modules.order;   cat drivers/gpu/drm/udl/modules.order;   cat drivers/gpu/drm/ast/modules.order;   cat drivers/gpu/drm/qxl/modules.order;   cat drivers/gpu/drm/vboxvideo/modules.order; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/modules.order