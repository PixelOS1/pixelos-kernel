cmd_fs/netfs/netfs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/netfs/netfs.ko fs/netfs/netfs.o fs/netfs/netfs.mod.o;  true
