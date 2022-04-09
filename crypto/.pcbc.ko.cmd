cmd_crypto/pcbc.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o;  true
