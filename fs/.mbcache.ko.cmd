cmd_fs/mbcache.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/mbcache.ko fs/mbcache.o fs/mbcache.mod.o;  true
