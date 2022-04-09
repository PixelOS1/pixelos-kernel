cmd_crypto/anubis.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o;  true
