cmd_fs/f2fs/f2fs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/f2fs/f2fs.ko fs/f2fs/f2fs.o fs/f2fs/f2fs.mod.o;  true
