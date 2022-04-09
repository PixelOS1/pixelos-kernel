cmd_kernel/bpf/preload/iterators/iterators.o := x86_64-pc-linux-gnu-gcc -Wp,-MMD,kernel/bpf/preload/iterators/.iterators.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89 -m64 -I ./tools/include/ -I ./tools/include/uapi -I /usr/src/linux-5.17.1-gentoo-r1/kernel/bpf/preload/libbpf/include -Wno-unused-result  -c -o kernel/bpf/preload/iterators/iterators.o kernel/bpf/preload/iterators/iterators.c

source_kernel/bpf/preload/iterators/iterators.o := kernel/bpf/preload/iterators/iterators.c

deps_kernel/bpf/preload/iterators/iterators.o := \
  /usr/src/linux-5.17.1-gentoo-r1/kernel/bpf/preload/libbpf/include/bpf/libbpf.h \
    $(wildcard include/config/xxx) \
  tools/include/uapi/linux/bpf.h \
    $(wildcard include/config/CGROUP_BPF) \
    $(wildcard include/config/BPF_LIRC_MODE2) \
    $(wildcard include/config/EFFICIENT_UNALIGNED_ACCESS) \
    $(wildcard include/config/CGROUP_NET_CLASSID) \
    $(wildcard include/config/IP_ROUTE_CLASSID) \
    $(wildcard include/config/BPF_KPROBE_OVERRIDE) \
    $(wildcard include/config/FUNCTION_ERROR_INJECTION) \
    $(wildcard include/config/XFRM) \
    $(wildcard include/config/SOCK_CGROUP_DATA) \
    $(wildcard include/config/NET) \
  tools/include/linux/types.h \
  tools/include/uapi/linux/bpf_common.h \
  /usr/src/linux-5.17.1-gentoo-r1/kernel/bpf/preload/libbpf/include/bpf/libbpf_common.h \
  /usr/src/linux-5.17.1-gentoo-r1/kernel/bpf/preload/libbpf/include/bpf/libbpf_version.h \
  /usr/src/linux-5.17.1-gentoo-r1/kernel/bpf/preload/libbpf/include/bpf/libbpf_legacy.h \
  /usr/src/linux-5.17.1-gentoo-r1/kernel/bpf/preload/libbpf/include/bpf/bpf.h \
  kernel/bpf/preload/iterators/iterators.skel.h \
  kernel/bpf/preload/iterators/bpf_preload_common.h \

kernel/bpf/preload/iterators/iterators.o: $(deps_kernel/bpf/preload/iterators/iterators.o)

$(deps_kernel/bpf/preload/iterators/iterators.o):
