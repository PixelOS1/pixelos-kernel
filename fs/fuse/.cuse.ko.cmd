cmd_fs/fuse/cuse.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/fuse/cuse.ko fs/fuse/cuse.o fs/fuse/cuse.mod.o;  true
