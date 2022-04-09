cmd_fs/befs/befs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/befs/befs.ko fs/befs/befs.o fs/befs/befs.mod.o;  true
