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
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x1ccb388b, "input_ff_create_memless" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xeefcded2, "hid_hw_request" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000146Bp00000902");

MODULE_INFO(srcversion, "012E939EEF8279167A2F638");
