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
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb3a5fce5, "devm_rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5ac5f0f5, "devm_rc_allocate_device" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0x9769a4e5, "ir_raw_event_set_idle" },
	{ 0xe21b2d6, "ir_raw_event_store_with_filter" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v04E8pFF30d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "922F4043C3736DC70E4F907");
