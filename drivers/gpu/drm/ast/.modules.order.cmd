cmd_drivers/gpu/drm/ast/modules.order := {   echo drivers/gpu/drm/ast/ast.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/ast/modules.order
