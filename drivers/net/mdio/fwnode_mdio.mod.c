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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x3c1098a3, "get_phy_device" },
	{ 0xf8c92341, "fwnode_irq_get" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x99de9c60, "phy_device_register" },
	{ 0x5588cd75, "phy_device_create" },
	{ 0xe44aecc1, "fwnode_handle_get" },
	{ 0xef1e6e10, "phy_device_free" },
	{ 0x353a2ab4, "is_acpi_data_node" },
	{ 0x25847e19, "unregister_mii_timestamper" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7290df4d, "device_set_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd5a8a28, "fwnode_property_match_string" },
	{ 0x5c91c56c, "fwnode_get_phy_id" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "libphy");


MODULE_INFO(srcversion, "5DFC00A9388FDA93E08A517");
