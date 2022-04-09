cmd_lib/parman.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/parman.ko lib/parman.o lib/parman.mod.o;  true
