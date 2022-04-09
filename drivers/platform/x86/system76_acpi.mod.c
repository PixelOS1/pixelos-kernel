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
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xd87e4582, "led_classdev_notify_brightness_hw_changed" },
	{ 0x331337dc, "input_event" },
	{ 0x3d10108, "battery_hook_register" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c998634, "battery_hook_unregister" },
	{ 0xf0645b7d, "devm_led_classdev_unregister" },
	{ 0x31d1e5a1, "device_add_groups" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x45081703, "ec_get_handle" },
	{ 0xf727f0b0, "device_remove_groups" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:17761776:*");

MODULE_INFO(srcversion, "EE96C050AC853B05EEE58AB");
