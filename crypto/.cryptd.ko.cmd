cmd_crypto/cryptd.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o;  true
