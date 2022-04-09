cmd_fs/fat/msdos.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/fat/msdos.ko fs/fat/msdos.o fs/fat/msdos.mod.o;  true
