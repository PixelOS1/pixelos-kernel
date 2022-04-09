cmd_block/t10-pi.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o block/t10-pi.ko block/t10-pi.o block/t10-pi.mod.o;  true
