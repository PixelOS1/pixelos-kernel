cmd_crypto/rmd160.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o;  true
