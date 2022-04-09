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
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v2639p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0017d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0B599D628A0DCAED4B7538E");
