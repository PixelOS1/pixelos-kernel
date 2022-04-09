cmd_mm/hwpoison-inject.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o mm/hwpoison-inject.ko mm/hwpoison-inject.o mm/hwpoison-inject.mod.o;  true
