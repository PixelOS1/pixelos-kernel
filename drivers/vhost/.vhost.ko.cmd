cmd_drivers/vhost/vhost.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o drivers/vhost/vhost.ko drivers/vhost/vhost.o drivers/vhost/vhost.mod.o;  true
