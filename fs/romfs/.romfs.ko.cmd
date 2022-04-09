cmd_fs/romfs/romfs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/romfs/romfs.ko fs/romfs/romfs.o fs/romfs/romfs.mod.o;  true
