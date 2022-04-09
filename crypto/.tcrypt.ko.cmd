cmd_crypto/tcrypt.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/tcrypt.ko crypto/tcrypt.o crypto/tcrypt.mod.o;  true
