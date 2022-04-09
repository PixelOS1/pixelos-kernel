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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0x331337dc, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8ccf5210, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "855BAA1E598236A45600F29");
