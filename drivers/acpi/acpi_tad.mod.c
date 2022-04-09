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
	{ 0x349cba85, "strchr" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000E:*");

MODULE_INFO(srcversion, "F10642FE3B38EDD0177FF1C");
