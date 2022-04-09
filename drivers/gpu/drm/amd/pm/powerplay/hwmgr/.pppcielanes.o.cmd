cmd_drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o := x86_64-pc-linux-gnu-gcc -Wp,-MMD,drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/.pppcielanes.o.d -nostdinc -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -fcf-protection=none -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -DCONFIG_X86_X32_ABI -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -fno-jump-tables -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O3 -fno-allow-store-data-races -Wframe-larger-than=2048 -fstack-protector-strong -Wimplicit-fallthrough=5 -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-stack-clash-protection -pg -mrecord-mcount -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wcast-function-type -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -Wno-alloc-size-larger-than -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -I./drivers/gpu/drm/amd/amdgpu/../pm/inc/ -I./drivers/gpu/drm/amd/amdgpu/../include/asic_reg -I./drivers/gpu/drm/amd/amdgpu/../include -I./drivers/gpu/drm/amd/amdgpu/../pm/swsmu -I./drivers/gpu/drm/amd/amdgpu/../pm/swsmu/smu11 -I./drivers/gpu/drm/amd/amdgpu/../pm/swsmu/smu12 -I./drivers/gpu/drm/amd/amdgpu/../pm/swsmu/smu13 -I./drivers/gpu/drm/amd/amdgpu/../pm/powerplay -I./drivers/gpu/drm/amd/amdgpu/../pm/powerplay/smumgr -I./drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr -I./drivers/gpu/drm/amd/amdgpu/../display/dc/inc/ -I./drivers/gpu/drm/amd/amdgpu/../display/dc/inc/hw -I./drivers/gpu/drm/amd/amdgpu/../display/dc/clk_mgr -I./drivers/gpu/drm/amd/amdgpu/../display/modules/inc -I./drivers/gpu/drm/amd/amdgpu/../display/modules/freesync -I./drivers/gpu/drm/amd/amdgpu/../display/modules/color -I./drivers/gpu/drm/amd/amdgpu/../display/modules/info_packet -I./drivers/gpu/drm/amd/amdgpu/../display/modules/power -I./drivers/gpu/drm/amd/amdgpu/../display/dmub/inc -I./drivers/gpu/drm/amd/amdgpu/../display/modules/hdcp -DBUILD_FEATURE_TIMING_SYNC=0 -I./drivers/gpu/drm/amd/amdgpu/../display/dc -I./drivers/gpu/drm/amd/amdgpu/../include/asic_reg -I./drivers/gpu/drm/amd/amdgpu/../include -I./drivers/gpu/drm/amd/amdgpu/../amdgpu -I./drivers/gpu/drm/amd/amdgpu/../pm/inc -I./drivers/gpu/drm/amd/amdgpu/../acp/include -I./drivers/gpu/drm/amd/amdgpu/../display -I./drivers/gpu/drm/amd/amdgpu/../display/include -I./drivers/gpu/drm/amd/amdgpu/../display/dc -I./drivers/gpu/drm/amd/amdgpu/../display/amdgpu_dm -I./drivers/gpu/drm/amd/amdgpu/../amdkfd  -DMODULE  -DKBUILD_BASENAME='"pppcielanes"' -DKBUILD_MODNAME='"amdgpu"' -D__KBUILD_MODNAME=kmod_amdgpu -c -o drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.c  ; ./tools/objtool/objtool orc generate  --module  --no-fp   --retpoline  --uaccess   drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o

source_drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o := drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.c

deps_drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/KCOV) \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/x86/include/generated/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler_types.h \
  arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/X86_32) \
  arch/x86/include/uapi/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  drivers/gpu/drm/amd/amdgpu/../include/atom-types.h \
  drivers/gpu/drm/amd/amdgpu/../include/atombios.h \
    $(wildcard include/config/MEMSIZE) \
  drivers/gpu/drm/amd/amdgpu/../include/pptable.h \
  drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.h \

drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o: $(deps_drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o)

$(deps_drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o):

drivers/gpu/drm/amd/amdgpu/../pm/powerplay/hwmgr/pppcielanes.o: $(wildcard ./tools/objtool/objtool)
