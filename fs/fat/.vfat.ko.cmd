cmd_fs/fat/vfat.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/fat/vfat.ko fs/fat/vfat.o fs/fat/vfat.mod.o;  true
