cmd_drivers/vfio/vfio.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o drivers/vfio/vfio.ko drivers/vfio/vfio.o drivers/vfio/vfio.mod.o;  true
