cmd_fs/exfat/exfat.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/exfat/exfat.ko fs/exfat/exfat.o fs/exfat/exfat.mod.o;  true
