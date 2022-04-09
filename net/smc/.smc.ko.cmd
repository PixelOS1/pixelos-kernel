cmd_net/smc/smc.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o net/smc/smc.ko net/smc/smc.o net/smc/smc.mod.o;  true
