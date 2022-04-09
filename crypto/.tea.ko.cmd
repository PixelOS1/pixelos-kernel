cmd_crypto/tea.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o crypto/tea.ko crypto/tea.o crypto/tea.mod.o;  true
