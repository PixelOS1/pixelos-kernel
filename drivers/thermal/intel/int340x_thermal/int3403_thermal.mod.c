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
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x25da57db, "thermal_cooling_device_unregister" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9ba4e512, "int340x_thermal_read_trips" },
	{ 0x54eb34a1, "thermal_zone_device_update" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a7a7e28, "thermal_cooling_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x22829956, "int340x_thermal_zone_remove" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x2ff190e6, "int340x_thermal_zone_add" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3403:*");
MODULE_ALIAS("acpi*:INTC1043:*");
MODULE_ALIAS("acpi*:INTC1046:*");
MODULE_ALIAS("acpi*:INTC10A1:*");

MODULE_INFO(srcversion, "AE9C998320AE99B2A9AFAA9");
