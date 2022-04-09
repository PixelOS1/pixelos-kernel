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
	{ 0x229d0e87, "hid_unregister_driver" },
	{ 0x4195254f, "class_destroy" },
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe4fb08fe, "roccat_connect" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002CED");

MODULE_INFO(srcversion, "B617E774BFC5C7962BAA174");
