cmd_drivers/gpu/drm/i915/modules.order := {   echo drivers/gpu/drm/i915/i915.ko;   echo drivers/gpu/drm/i915/gvt/kvmgt.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/i915/modules.order
