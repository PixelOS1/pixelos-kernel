cmd_mm/modules.order := {   echo mm/hwpoison-inject.ko; :; } | awk '!x[$$0]++' - > mm/modules.order
