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
	{ 0xf961077b, "genphy_c45_loopback" },
	{ 0xf999dc3d, "phy_drivers_unregister" },
	{ 0x29181f8d, "phy_drivers_register" },
	{ 0x3ed114a5, "phy_resolve_aneg_pause" },
	{ 0xd7b93130, "genphy_c45_read_lpa" },
	{ 0xd10e4a4f, "genphy_c45_read_link" },
	{ 0xc11a46b8, "genphy_c45_pma_setup_forced" },
	{ 0xee6d43b2, "genphy_c45_check_and_restart_aneg" },
	{ 0x2a606582, "genphy_c45_an_config_aneg" },
	{ 0x8e87c257, "phy_modify_mmd_changed" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf0fee4e3, "genphy_c45_pma_read_abilities" },
	{ 0x5aa3f1a6, "phy_sfp_probe" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8e44823a, "sfp_select_interface" },
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x8ab9fba2, "genphy_c45_aneg_done" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0x72219238, "phy_modify_mmd" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0000000000101011000010011010????");
MODULE_ALIAS("mdio:0000000000101011000010011011????");

MODULE_INFO(srcversion, "BB0F4A5B9D8EEE4ABC955FF");
