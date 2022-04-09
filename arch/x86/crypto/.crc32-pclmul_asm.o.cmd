cmd_arch/x86/crypto/crc32-pclmul_asm.o := x86_64-pc-linux-gnu-gcc -Wp,-MMD,arch/x86/crypto/.crc32-pclmul_asm.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -m64 -DCONFIG_X86_X32_ABI -DCC_USING_FENTRY  -DMODULE  -c -o arch/x86/crypto/crc32-pclmul_asm.o arch/x86/crypto/crc32-pclmul_asm.S  ; ./tools/objtool/objtool orc generate  --module  --no-fp   --retpoline  --uaccess   arch/x86/crypto/crc32-pclmul_asm.o

source_arch/x86/crypto/crc32-pclmul_asm.o := arch/x86/crypto/crc32-pclmul_asm.S

deps_arch/x86/crypto/crc32-pclmul_asm.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/MODULE_REL_CRCS) \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/x86/include/asm/linkage.h \
    $(wildcard include/config/X86_32) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/X86_ALIGNMENT_16) \
    $(wildcard include/config/SLS) \

arch/x86/crypto/crc32-pclmul_asm.o: $(deps_arch/x86/crypto/crc32-pclmul_asm.o)

$(deps_arch/x86/crypto/crc32-pclmul_asm.o):

arch/x86/crypto/crc32-pclmul_asm.o: $(wildcard ./tools/objtool/objtool)
