cmd_fs/xfs/xfs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/xfs/xfs.ko fs/xfs/xfs.o fs/xfs/xfs.mod.o;  true
