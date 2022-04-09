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
	{ 0xd87e4582, "led_classdev_notify_brightness_hw_changed" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x331337dc, "input_event" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x42ad8fea, "hid_hw_stop" },
	{ 0x66d065e8, "hid_hw_output_report" },
	{ 0xcb2cb33d, "hid_hw_start" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8d97594e, "hid_open_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x64acaa9d, "hid_hw_raw_request" },
	{ 0x29b7c46d, "hid_hw_close" },
	{ 0xa8b52982, "hid_hw_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C225");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C222");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C227");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22D");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22E");
MODULE_ALIAS("hid:b0003g*v0000046Dp00000A07");

MODULE_INFO(srcversion, "B18E2535E9751BB6DA9388B");
