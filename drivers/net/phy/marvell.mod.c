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
	{ 0xb6acaa13, "phy_sfp_detach" },
	{ 0x394a1e11, "phy_sfp_attach" },
	{ 0xb98bb315, "phy_gbit_fibre_features" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x4675be69, "genphy_read_status_fixed" },
	{ 0x3ed114a5, "phy_resolve_aneg_pause" },
	{ 0x281adbcd, "genphy_read_lpa" },
	{ 0x499f0de3, "genphy_update_link" },
	{ 0x6af161d1, "ethnl_cable_test_amplitude" },
	{ 0xb4a9ba85, "ethnl_cable_test_fault_length" },
	{ 0x743dc506, "ethnl_cable_test_result" },
	{ 0xb13e7fcf, "phy_ethtool_get_eee" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2b0cb8b9, "phy_modify_paged_changed" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x5aa3f1a6, "phy_sfp_probe" },
	{ 0x2e82e1e7, "genphy_setup_forced" },
	{ 0x2f7f7419, "genphy_check_and_restart_aneg" },
	{ 0xf3930255, "phy_modify_changed" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xdb2d0199, "phy_config_aneg" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x61495404, "phy_error" },
	{ 0x817f296c, "phy_trigger_machine" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd45de57f, "phy_save_page" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8e44823a, "sfp_select_interface" },
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x6d849403, "__phy_modify" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0xf91f4605, "ethnl_cable_test_step" },
	{ 0xa92ecb2e, "ethnl_cable_test_pulse" },
	{ 0xa5ed863a, "phy_write_paged" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0xa4e1f88e, "genphy_suspend" },
	{ 0x9f14a8c0, "genphy_resume" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x73c5ed0a, "phy_restore_page" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x13240c2b, "phy_select_page" },
	{ 0x1fbb70c0, "__mdiobus_read" },
	{ 0xfc4d8f04, "phy_modify_paged" },
	{ 0x8cf2592f, "phy_read_paged" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000111111111000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011110100????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");
MODULE_ALIAS("mdio:0000000000101011000010111001????");
MODULE_ALIAS("mdio:0000000101000001000011011100????");
MODULE_ALIAS("mdio:0000000101000001000011101100????");

MODULE_INFO(srcversion, "6E8AEFCBF99B1E5B51DCCF0");
