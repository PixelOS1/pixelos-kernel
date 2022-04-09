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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x3ca6873c, "acpi_dev_gpio_irq_get_by" },
	{ 0x754d539c, "strlen" },
	{ 0x6b9cd9e3, "i2c_acpi_new_device_by_fwnode" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x6a2f52d1, "i2c_acpi_client_count" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:BSG1160:*");
MODULE_ALIAS("acpi*:BSG2150:*");
MODULE_ALIAS("acpi*:INT3515:*");

MODULE_INFO(srcversion, "8D06ADC4FAA08354E3E991A");
