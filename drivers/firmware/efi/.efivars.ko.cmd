cmd_drivers/firmware/efi/efivars.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o drivers/firmware/efi/efivars.ko drivers/firmware/efi/efivars.o drivers/firmware/efi/efivars.mod.o;  true