cmd_net/tls/tls.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o net/tls/tls.ko net/tls/tls.o net/tls/tls.mod.o;  true
