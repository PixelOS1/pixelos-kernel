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
	{ 0x38cf8318, "genphy_handle_interrupt_no_ack" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0xa5ed863a, "phy_write_paged" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0x73c5ed0a, "phy_restore_page" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x13240c2b, "phy_select_page" },
	{ 0xfc4d8f04, "phy_modify_paged" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000001110100010100101??????????");

MODULE_INFO(srcversion, "1D0006F1E1CD8E1BDE78C57");
