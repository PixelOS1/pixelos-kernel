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
	{ 0x7220fc0a, "phy_modify" },
	{ 0x7804184c, "phy_get_internal_delay" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:00000011000000100110000011010001");
MODULE_ALIAS("mdio:00000011000000100110000011100001");
MODULE_ALIAS("mdio:11010101011001011010010000000000");
MODULE_ALIAS("mdio:11010101011001011010010000010000");
MODULE_ALIAS("mdio:11010101011001011010010000000001");
MODULE_ALIAS("mdio:11010101011001011010010000010001");
MODULE_ALIAS("mdio:11010101011001011010010000001000");
MODULE_ALIAS("mdio:11010101011001011010010000011000");
MODULE_ALIAS("mdio:11010101011001011010010000001001");
MODULE_ALIAS("mdio:11010101011001011010010000011001");

MODULE_INFO(srcversion, "5A093A1C7DA65150109470F");
