cmd_sound/soundcore.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o sound/soundcore.ko sound/soundcore.o sound/soundcore.mod.o;  true
