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
	{ 0xc0ae145b, "bcm_phy_cable_test_get_status_rdb" },
	{ 0xc12d8ad8, "bcm_phy_cable_test_start_rdb" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0x8effb505, "phy_gbit_features" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0x1e0da9cd, "bcm_phy_write_rdb" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x1b0f9ac1, "bcm_phy_modify_rdb" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5c0ace65, "devm_phy_package_join" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0xeeb68111, "bcm_phy_read_rdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib,libphy");

MODULE_ALIAS("mdio:101011100000001001010000000?1???");

MODULE_INFO(srcversion, "FFECEBB0F88C6C8D9FAD5C3");
