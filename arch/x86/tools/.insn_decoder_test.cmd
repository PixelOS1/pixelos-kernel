cmd_arch/x86/tools/insn_decoder_test := x86_64-pc-linux-gnu-gcc -Wp,-MMD,arch/x86/tools/.insn_decoder_test.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./tools/include -Wall -I./tools/arch/x86/lib/ -I./tools/arch/x86/include/ -I./arch/x86/lib/   -o arch/x86/tools/insn_decoder_test arch/x86/tools/insn_decoder_test.c   

source_arch/x86/tools/insn_decoder_test := arch/x86/tools/insn_decoder_test.c

deps_arch/x86/tools/insn_decoder_test := \
  tools/arch/x86/include/asm/insn.h \
  tools/arch/x86/include/asm/inat.h \
  tools/arch/x86/include/asm/inat_types.h \
  tools/arch/x86/lib/inat.c \
  tools/arch/x86/lib/../include/asm/insn.h \
  arch/x86/lib/inat-tables.c \
  tools/arch/x86/lib/insn.c \
    $(wildcard include/config/X86_64) \
  tools/include/linux/kernel.h \
  tools/include/linux/build_bug.h \
  tools/include/linux/compiler.h \
  tools/include/linux/compiler_types.h \
  tools/include/linux/compiler-gcc.h \
  tools/include/linux/math.h \
  tools/arch/x86/lib/../include/asm/inat.h \
  tools/include/../include/asm-generic/unaligned.h \
  tools/include/linux/kconfig.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  tools/arch/x86/lib/../include/asm/emulate_prefix.h \

arch/x86/tools/insn_decoder_test: $(deps_arch/x86/tools/insn_decoder_test)

$(deps_arch/x86/tools/insn_decoder_test):
