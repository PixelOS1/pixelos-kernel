cmd_crypto/keywrap.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/keywrap.ko crypto/keywrap.o crypto/keywrap.mod.o;  true
