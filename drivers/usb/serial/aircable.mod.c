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
	{ 0x1c97c80, "usb_serial_generic_unthrottle" },
	{ 0x45b49ad4, "usb_serial_generic_throttle" },
	{ 0xa6844538, "usb_serial_deregister_drivers" },
	{ 0xf0aa6e92, "usb_serial_register_drivers" },
	{ 0x636171c0, "tty_flip_buffer_push" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xadfce41f, "tty_insert_flip_string_fixed_flag" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v16CAp1502d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B911B4337EC4395D7D1F372");
