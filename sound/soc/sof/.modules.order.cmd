cmd_sound/soc/sof/modules.order := {   cat sound/soc/sof/intel/modules.order;   echo sound/soc/sof/snd-sof.ko;   echo sound/soc/sof/snd-sof-acpi.ko;   echo sound/soc/sof/snd-sof-pci.ko;   cat sound/soc/sof/xtensa/modules.order; :; } | awk '!x[$$0]++' - > sound/soc/sof/modules.order