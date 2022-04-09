cmd_fs/vboxsf/vboxsf.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/vboxsf/vboxsf.ko fs/vboxsf/vboxsf.o fs/vboxsf/vboxsf.mod.o;  true
