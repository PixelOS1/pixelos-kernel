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
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0xfe4b67f1, "genphy_c45_fast_retrain" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1194b4a6, "genphy_read_status" },
	{ 0x2e82e1e7, "genphy_setup_forced" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0xc11a46b8, "genphy_c45_pma_setup_forced" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x8e87c257, "phy_modify_mmd_changed" },
	{ 0x3ed114a5, "phy_resolve_aneg_pause" },
	{ 0x281adbcd, "genphy_read_lpa" },
	{ 0x499f0de3, "genphy_update_link" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xe54ea621, "mdio_device_reset" },
	{ 0xdba4d3ab, "genphy_read_abilities" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x61495404, "phy_error" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0xa45472d6, "phy_init_hw" },
	{ 0xf3930255, "phy_modify_changed" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb4a9ba85, "ethnl_cable_test_fault_length" },
	{ 0x743dc506, "ethnl_cable_test_result" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0x6d849403, "__phy_modify" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:00000000010011011101000001110100");
MODULE_ALIAS("mdio:00000000010011011101000000100011");
MODULE_ALIAS("mdio:00000000010011011101000001110010");
MODULE_ALIAS("mdio:00000000010011011101000001000001");
MODULE_ALIAS("mdio:00000000010011011101000000110110");
MODULE_ALIAS("mdio:00000000010011011101000000110011");
MODULE_ALIAS("mdio:00000000010011011101000000110100");
MODULE_ALIAS("mdio:00000000010011011101000001000010");
MODULE_ALIAS("mdio:00000000010011011101000100000001");

MODULE_INFO(srcversion, "7C058BF3C31DCF6A5CFE0B8");
