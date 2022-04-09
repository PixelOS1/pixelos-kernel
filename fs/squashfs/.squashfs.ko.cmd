cmd_fs/squashfs/squashfs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/squashfs/squashfs.ko fs/squashfs/squashfs.o fs/squashfs/squashfs.mod.o;  true
