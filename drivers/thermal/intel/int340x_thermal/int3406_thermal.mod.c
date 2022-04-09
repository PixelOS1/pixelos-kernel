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
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x4a7a7e28, "thermal_cooling_device_register" },
	{ 0x97adc663, "acpi_video_get_levels" },
	{ 0x575d2cfc, "backlight_device_get_by_type" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc43e481e, "backlight_device_set_brightness" },
	{ 0x37a0cba, "kfree" },
	{ 0x25da57db, "thermal_cooling_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video,backlight");

MODULE_ALIAS("acpi*:INT3406:*");

MODULE_INFO(srcversion, "C40B94C1049D5F68A499386");
