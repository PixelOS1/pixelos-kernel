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
	{ 0xf3ad571a, "genphy_write_mmd_unsupported" },
	{ 0xeaeaeadc, "genphy_read_mmd_unsupported" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb4a9ba85, "ethnl_cable_test_fault_length" },
	{ 0x743dc506, "ethnl_cable_test_result" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xa45472d6, "phy_init_hw" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x61495404, "phy_error" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdba4d3ab, "genphy_read_abilities" },
	{ 0xcbcfe96c, "genphy_restart_aneg" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:????????????0010000101100001000?");
MODULE_ALIAS("mdio:????????00100010000101100010????");
MODULE_ALIAS("mdio:????????00100010000101100100????");
MODULE_ALIAS("mdio:????????0010001000010110000110??");
MODULE_ALIAS("mdio:????????00100010000101110010????");
MODULE_ALIAS("mdio:????????001000100001010101010101");
MODULE_ALIAS("mdio:????????001000100001010101010110");
MODULE_ALIAS("mdio:????????00100010000101010001????");
MODULE_ALIAS("mdio:????????00100010000101010101????");
MODULE_ALIAS("mdio:????????00100010000101010111????");
MODULE_ALIAS("mdio:????????00100010000101010110????");
MODULE_ALIAS("mdio:????????00001110011100100011????");
MODULE_ALIAS("mdio:????????00100010000101000011????");
MODULE_ALIAS("mdio:????????00100010000101100110????");
MODULE_ALIAS("mdio:????????00100010000101100111????");

MODULE_INFO(srcversion, "8CF8C4418316A12490874DD");
