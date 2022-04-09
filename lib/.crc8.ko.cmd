cmd_lib/crc8.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o;  true
