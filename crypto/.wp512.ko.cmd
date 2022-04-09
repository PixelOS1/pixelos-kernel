cmd_crypto/wp512.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/wp512.ko crypto/wp512.o crypto/wp512.mod.o;  true
