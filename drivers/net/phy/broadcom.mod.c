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
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0xd7c3e5f6, "bcm_phy_get_strings" },
	{ 0x7763cd8a, "bcm_phy_handle_interrupt" },
	{ 0x7212a98d, "bcm_phy_config_intr" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xe0946ba3, "genphy_c37_config_aneg" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0xe4d722dd, "bcm_phy_write_shadow" },
	{ 0xe47a07f8, "bcm54xx_auxctl_write" },
	{ 0xbc9767, "bcm54xx_auxctl_read" },
	{ 0x3ee20d89, "bcm_phy_write_exp" },
	{ 0x81030322, "bcm_phy_read_exp" },
	{ 0x83dcfeba, "bcm_phy_get_sset_count" },
	{ 0x477fdf99, "bcm_phy_get_stats" },
	{ 0x7c10691e, "bcm_phy_read_shadow" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x6db673e0, "genphy_c37_read_status" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,bcm-phy-lib");

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0110000000001101100001001010????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000001101100010010111010000????");
MODULE_ALIAS("mdio:0000001101100010010111001100????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
MODULE_ALIAS("mdio:0000000101000011101111001111????");
MODULE_ALIAS("mdio:0000001101100010010111110010????");
MODULE_ALIAS("mdio:0000001101100010010111001101????");

MODULE_INFO(srcversion, "E99E09B4E812C1909A1E40C");
