cmd_crypto/cast_common.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o;  true
