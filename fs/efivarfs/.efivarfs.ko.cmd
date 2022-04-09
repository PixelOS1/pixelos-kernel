cmd_fs/efivarfs/efivarfs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/efivarfs/efivarfs.ko fs/efivarfs/efivarfs.o fs/efivarfs/efivarfs.mod.o;  true
