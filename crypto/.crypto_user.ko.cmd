cmd_crypto/crypto_user.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/crypto_user.ko crypto/crypto_user.o crypto/crypto_user.mod.o;  true
