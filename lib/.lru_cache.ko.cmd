cmd_lib/lru_cache.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o;  true
