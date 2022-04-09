cmd_fs/pstore/pstore_blk.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/pstore/pstore_blk.ko fs/pstore/pstore_blk.o fs/pstore/pstore_blk.mod.o;  true
