cmd_lib/objagg.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/objagg.ko lib/objagg.o lib/objagg.mod.o;  true
