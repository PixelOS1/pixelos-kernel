cmd_kernel/debug/built-in.a := echo >/dev/null; rm -f kernel/debug/built-in.a; x86_64-pc-linux-gnu-ar cDPrST kernel/debug/built-in.a kernel/debug/debug_core.o kernel/debug/gdbstub.o
