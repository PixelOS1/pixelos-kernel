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
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa6257a2f, "complete" },
	{ 0x11f89fea, "ucsi_connector_change" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x745e1539, "ucsi_get_drvdata" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x70daadb3, "ucsi_register" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xf9a7aef7, "ucsi_set_drvdata" },
	{ 0x23c15cb8, "ucsi_create" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xcd3e5c7c, "acpi_release_memory" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x38013f52, "ucsi_destroy" },
	{ 0x98cfdb13, "ucsi_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "typec_ucsi");

MODULE_ALIAS("acpi*:PNP0CA0:*");

MODULE_INFO(srcversion, "96B3F0F7F304EF094FDF449");
