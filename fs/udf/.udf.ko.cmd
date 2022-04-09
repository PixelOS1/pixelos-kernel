cmd_fs/udf/udf.ko := x86_64-pc-linux-gnu-ld -r -m elf_x86_64 --build-id=sha1  -T scripts/module.lds -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o;  true
