cmd_fs/ufs/ufs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/ufs/ufs.ko fs/ufs/ufs.o fs/ufs/ufs.mod.o;  true
