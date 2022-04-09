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
	{ 0x357c7c39, "__hid_register_driver" },
	{ 0xa3ac3e9a, "devm_hwrng_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x677f83f1, "usb_hid_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa6257a2f, "complete" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xc0ab925e, "usb_poison_urb" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000010C4p00008ACF");
MODULE_ALIAS("hid:b0003g*v000020A0p00004287");

MODULE_INFO(srcversion, "AE1ED48CB34429FBE521601");
