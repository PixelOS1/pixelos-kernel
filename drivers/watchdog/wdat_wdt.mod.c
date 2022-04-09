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
	{ 0x78c2054, "param_ops_bool" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xac1e1dd9, "devm_watchdog_register_device" },
	{ 0xee09ed35, "devm_ioremap_resource" },
	{ 0x9f7149a2, "devm_ioport_map" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xb19b445, "ioread8" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D257BA0E8A0925DC024F803");
