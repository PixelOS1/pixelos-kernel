cmd_crypto/lz4.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o;  true
