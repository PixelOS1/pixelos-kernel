cmd_sound/core/seq/oss/modules.order := {   echo sound/core/seq/oss/snd-seq-oss.ko; :; } | awk '!x[$$0]++' - > sound/core/seq/oss/modules.order
