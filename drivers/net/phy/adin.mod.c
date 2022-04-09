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
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4a9ba85, "ethnl_cable_test_fault_length" },
	{ 0x743dc506, "ethnl_cable_test_result" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000001010000011101111000010????");
MODULE_ALIAS("mdio:0000001010000011101111000011????");

MODULE_INFO(srcversion, "C62C08678D1B13FAEACCA4C");
