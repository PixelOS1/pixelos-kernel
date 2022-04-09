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
	{ 0xbbf4dfbe, "phy_basic_t1_features" },
	{ 0x38cf8318, "genphy_handle_interrupt_no_ack" },
	{ 0xf3ad571a, "genphy_write_mmd_unsupported" },
	{ 0xeaeaeadc, "genphy_read_mmd_unsupported" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x499f0de3, "genphy_update_link" },
	{ 0x73c5ed0a, "phy_restore_page" },
	{ 0x6d849403, "__phy_modify" },
	{ 0x13240c2b, "phy_select_page" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xfc4d8f04, "phy_modify_paged" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdba4d3ab, "genphy_read_abilities" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x2b0cb8b9, "phy_modify_paged_changed" },
	{ 0x8cf2592f, "phy_read_paged" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xf3930255, "phy_modify_changed" },
	{ 0xa5ed863a, "phy_write_paged" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "2FF59667CF76D24AF27E2E5");
