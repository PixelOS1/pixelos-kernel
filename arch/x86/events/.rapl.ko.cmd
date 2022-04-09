cmd_arch/x86/events/rapl.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o arch/x86/events/rapl.ko arch/x86/events/rapl.o arch/x86/events/rapl.mod.o;  true
