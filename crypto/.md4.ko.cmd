cmd_crypto/md4.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o;  true
