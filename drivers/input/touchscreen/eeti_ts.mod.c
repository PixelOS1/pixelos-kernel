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
	{ 0xc7d30f91, "input_register_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x331337dc, "input_event" },
	{ 0x3db2e2e, "touchscreen_report_pos" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:eeti_ts");

MODULE_INFO(srcversion, "9BD5463C7536444F5621536");
