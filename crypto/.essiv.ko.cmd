cmd_crypto/essiv.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/essiv.ko crypto/essiv.o crypto/essiv.mod.o;  true
