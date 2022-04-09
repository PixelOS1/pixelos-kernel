cmd_crypto/michael_mic.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/michael_mic.ko crypto/michael_mic.o crypto/michael_mic.mod.o;  true
