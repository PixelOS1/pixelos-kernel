cmd_lib/ts_kmp.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o;  true
