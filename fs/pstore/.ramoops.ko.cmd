cmd_fs/pstore/ramoops.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/pstore/ramoops.ko fs/pstore/ramoops.o fs/pstore/ramoops.mod.o;  true
