cmd_lib/crc64.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/crc64.ko lib/crc64.o lib/crc64.mod.o;  true
