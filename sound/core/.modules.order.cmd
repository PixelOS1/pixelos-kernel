cmd_sound/core/modules.order := {   cat sound/core/oss/modules.order;   echo sound/core/snd.ko;   echo sound/core/snd-ctl-led.ko;   echo sound/core/snd-hwdep.ko;   echo sound/core/snd-timer.ko;   echo sound/core/snd-hrtimer.ko;   echo sound/core/snd-pcm.ko;   echo sound/core/snd-pcm-dmaengine.ko;   echo sound/core/snd-seq-device.ko;   echo sound/core/snd-rawmidi.ko;   cat sound/core/seq/modules.order;   echo sound/core/snd-compress.ko; :; } | awk '!x[$$0]++' - > sound/core/modules.order