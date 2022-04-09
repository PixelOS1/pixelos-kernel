cmd_net/kcm/kcm.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o net/kcm/kcm.ko net/kcm/kcm.o net/kcm/kcm.mod.o;  true
