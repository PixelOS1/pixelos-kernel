cmd_crypto/seed.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/seed.ko crypto/seed.o crypto/seed.mod.o;  true
