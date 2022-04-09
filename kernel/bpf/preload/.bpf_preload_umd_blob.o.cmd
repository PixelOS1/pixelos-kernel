cmd_kernel/bpf/preload/bpf_preload_umd_blob.o := x86_64-pc-linux-gnu-gcc -Wp,-MMD,kernel/bpf/preload/.bpf_preload_umd_blob.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -m64 -DCONFIG_X86_X32_ABI -DCC_USING_FENTRY  -DMODULE  -c -o kernel/bpf/preload/bpf_preload_umd_blob.o kernel/bpf/preload/bpf_preload_umd_blob.S  ; ./tools/objtool/objtool orc generate  --module  --no-fp   --retpoline  --uaccess   kernel/bpf/preload/bpf_preload_umd_blob.o

source_kernel/bpf/preload/bpf_preload_umd_blob.o := kernel/bpf/preload/bpf_preload_umd_blob.S

deps_kernel/bpf/preload/bpf_preload_umd_blob.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \

kernel/bpf/preload/bpf_preload_umd_blob.o: $(deps_kernel/bpf/preload/bpf_preload_umd_blob.o)

$(deps_kernel/bpf/preload/bpf_preload_umd_blob.o):

kernel/bpf/preload/bpf_preload_umd_blob.o: $(wildcard ./tools/objtool/objtool)
