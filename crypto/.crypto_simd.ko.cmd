cmd_crypto/crypto_simd.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/crypto_simd.ko crypto/crypto_simd.o crypto/crypto_simd.mod.o;  true
