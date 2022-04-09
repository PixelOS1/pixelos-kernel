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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x3db2e2e, "touchscreen_report_pos" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x282d8810, "devm_device_add_group" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x89937627, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x1564421, "request_firmware" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "B7C99D890EBBBA8825B5EE6");
