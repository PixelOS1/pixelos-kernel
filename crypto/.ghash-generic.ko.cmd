cmd_crypto/ghash-generic.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/ghash-generic.ko crypto/ghash-generic.o crypto/ghash-generic.mod.o;  true
