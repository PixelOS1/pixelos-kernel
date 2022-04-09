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
	{ 0x2ce47abe, "ir_raw_event_store" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x418ffa0d, "ir_raw_event_handle" },
	{ 0xe21b2d6, "ir_raw_event_store_with_filter" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x550c12a1, "rc_free_device" },
	{ 0x538003d4, "rc_register_device" },
	{ 0xc410588, "rc_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x88f2d039, "rc_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v03EBp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp21FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DC5F220C133C8A28BDC220D");
