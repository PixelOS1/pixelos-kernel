cmd_arch/x86/kvm/modules.order := {   echo arch/x86/kvm/kvm.ko;   echo arch/x86/kvm/kvm-intel.ko;   echo arch/x86/kvm/kvm-amd.ko; :; } | awk '!x[$$0]++' - > arch/x86/kvm/modules.order
