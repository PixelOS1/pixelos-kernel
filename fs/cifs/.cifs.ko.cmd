cmd_fs/cifs/cifs.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/cifs/cifs.ko fs/cifs/cifs.o fs/cifs/cifs.mod.o;  true
