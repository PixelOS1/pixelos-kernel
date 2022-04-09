cmd_lib/ts_bm.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o;  true
