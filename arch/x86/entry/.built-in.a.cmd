cmd_arch/x86/entry/built-in.a := echo >/dev/null; rm -f arch/x86/entry/built-in.a; x86_64-pc-linux-gnu-ar cDPrST arch/x86/entry/built-in.a arch/x86/entry/entry_64.o arch/x86/entry/thunk_64.o arch/x86/entry/syscall_64.o arch/x86/entry/common.o arch/x86/entry/vdso/built-in.a arch/x86/entry/vsyscall/built-in.a arch/x86/entry/entry_64_compat.o arch/x86/entry/syscall_32.o arch/x86/entry/syscall_x32.o