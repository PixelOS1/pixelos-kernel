cmd_crypto/chacha20poly1305.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/chacha20poly1305.ko crypto/chacha20poly1305.o crypto/chacha20poly1305.mod.o;  true
