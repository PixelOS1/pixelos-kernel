cmd_kernel/torture.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o kernel/torture.ko kernel/torture.o kernel/torture.mod.o;  true
