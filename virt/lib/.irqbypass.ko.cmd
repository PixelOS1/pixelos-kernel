cmd_virt/lib/irqbypass.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o virt/lib/irqbypass.ko virt/lib/irqbypass.o virt/lib/irqbypass.mod.o;  true
