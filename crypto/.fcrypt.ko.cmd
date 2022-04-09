cmd_crypto/fcrypt.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/fcrypt.ko crypto/fcrypt.o crypto/fcrypt.mod.o;  true
