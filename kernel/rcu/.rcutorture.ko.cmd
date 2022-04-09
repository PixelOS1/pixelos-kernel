cmd_kernel/rcu/rcutorture.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o kernel/rcu/rcutorture.ko kernel/rcu/rcutorture.o kernel/rcu/rcutorture.mod.o;  true
