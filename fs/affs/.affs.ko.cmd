cmd_fs/affs/affs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/affs/affs.ko fs/affs/affs.o fs/affs/affs.mod.o;  true
