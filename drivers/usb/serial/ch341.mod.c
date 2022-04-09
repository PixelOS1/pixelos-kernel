#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x898a3d63, "usb_serial_generic_tiocmiwait" },
	{ 0xa6844538, "usb_serial_deregister_drivers" },
	{ 0xf0aa6e92, "usb_serial_register_drivers" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb8686dff, "usb_serial_generic_resume" },
	{ 0x93a772d6, "usb_serial_generic_open" },
	{ 0x18c82101, "tty_kref_put" },
	{ 0xd7ad084d, "usb_serial_handle_dcd_change" },
	{ 0x41c8178f, "tty_port_tty_get" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xb7bcf511, "tty_put_char" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a4ffb89, "usb_control_msg_recv" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0x37a0cba, "kfree" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xa2e328d4, "usb_serial_generic_close" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9986p7523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0F722FEC15BCF951202B917");
