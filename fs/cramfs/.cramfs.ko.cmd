cmd_fs/cramfs/cramfs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/cramfs/cramfs.ko fs/cramfs/cramfs.o fs/cramfs/cramfs.mod.o;  true
