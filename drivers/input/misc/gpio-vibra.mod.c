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
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x1ccb388b, "input_ff_create_memless" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");


MODULE_INFO(srcversion, "26F3243B941D19655257690");
