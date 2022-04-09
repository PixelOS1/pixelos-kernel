cmd_fs/sysv/sysv.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/sysv/sysv.ko fs/sysv/sysv.o fs/sysv/sysv.mod.o;  true
