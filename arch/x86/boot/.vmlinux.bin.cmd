cmd_arch/x86/boot/vmlinux.bin := x86_64-pc-linux-gnu-objcopy  -O binary -R .note -R .comment -S arch/x86/boot/compressed/vmlinux arch/x86/boot/vmlinux.bin
