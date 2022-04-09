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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0xc11a46b8, "genphy_c45_pma_setup_forced" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8e87c257, "phy_modify_mmd_changed" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xee6d43b2, "genphy_c45_check_and_restart_aneg" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2a606582, "genphy_c45_an_config_aneg" },
	{ 0x89f5ede9, "genphy_c45_read_status" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x61495404, "phy_error" },
	{ 0x373bca32, "phy_set_max_speed" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000001110100001101101000100????");
MODULE_ALIAS("mdio:0000001110100001101101000110????");
MODULE_ALIAS("mdio:0000001110100001101101001010????");
MODULE_ALIAS("mdio:0000001110100001101101001101????");
MODULE_ALIAS("mdio:0000001110100001101101001110????");
MODULE_ALIAS("mdio:0000001110100001101101011100????");
MODULE_ALIAS("mdio:0000001110100001101101001011????");

MODULE_INFO(srcversion, "202D75CBEAD4D8BA50171DF");
