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
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0xd7c3e5f6, "bcm_phy_get_strings" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x83dcfeba, "bcm_phy_get_sset_count" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe4d722dd, "bcm_phy_write_shadow" },
	{ 0x7c10691e, "bcm_phy_read_shadow" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x477fdf99, "bcm_phy_get_stats" },
	{ 0x30fa4eac, "bcm_phy_read_misc" },
	{ 0x81030322, "bcm_phy_read_exp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ee20d89, "bcm_phy_write_exp" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1ab0d396, "bcm_phy_enable_apd" },
	{ 0x5f9e6322, "bcm_phy_r_rc_cal_reset" },
	{ 0xee0311db, "bcm_phy_write_misc" },
	{ 0x556d12c1, "bcm_phy_28nm_a0b0_afe_config_init" },
	{ 0x511ed08e, "bcm_phy_enable_jumbo" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xb9f564ef, "bcm_phy_downshift_get" },
	{ 0xcbcfe96c, "genphy_restart_aneg" },
	{ 0xacf55693, "bcm_phy_set_eee" },
	{ 0x37684d13, "bcm_phy_downshift_set" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy,bcm-phy-lib");

MODULE_ALIAS("mdio:0011010110010000010100110001????");
MODULE_ALIAS("mdio:0011010110010000010100110101????");
MODULE_ALIAS("mdio:0011010110010000010100110100????");
MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100010010????");
MODULE_ALIAS("mdio:1010111000000010010100011001????");
MODULE_ALIAS("mdio:1010111000000010010100001001????");
MODULE_ALIAS("mdio:1010111000000010010100111011????");
MODULE_ALIAS("mdio:1010111000000010010100011010????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:1010111000000010010100101110????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");
MODULE_ALIAS("mdio:0011010110010000010100110011????");

MODULE_INFO(srcversion, "7549F3C1DB4F7A183D8B83C");
