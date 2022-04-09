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
	{ 0xa6844538, "usb_serial_deregister_drivers" },
	{ 0xf0aa6e92, "usb_serial_register_drivers" },
	{ 0x74dced14, "__tty_insert_flip_char" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x93a772d6, "usb_serial_generic_open" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xa2e328d4, "usb_serial_generic_close" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x7acbcbd, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v050Dp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0921p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0921p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1203d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CC281D0E5B9F11046E017EE");
