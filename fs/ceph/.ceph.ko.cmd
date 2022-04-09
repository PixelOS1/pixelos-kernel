cmd_fs/ceph/ceph.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/ceph/ceph.ko fs/ceph/ceph.o fs/ceph/ceph.mod.o;  true
