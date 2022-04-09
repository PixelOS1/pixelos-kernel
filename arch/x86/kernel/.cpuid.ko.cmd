cmd_arch/x86/kernel/cpuid.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o arch/x86/kernel/cpuid.ko arch/x86/kernel/cpuid.o arch/x86/kernel/cpuid.mod.o;  true
