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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xe413f862, "phy_ethtool_get_sset_count" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c7ab036, "dsa_devlink_resource_occ_get_register" },
	{ 0x5c86bb44, "mdiobus_get_phy" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xce39ddb6, "phy_ethtool_get_stats" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe29df535, "phy_ethtool_get_strings" },
	{ 0xe8c9ade8, "dsa_port_phylink_mac_change" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5ffdbb96, "phy_init_eee" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x79287474, "dsa_devlink_resources_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x131e8b94, "phylink_helper_basex_speed" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x611ba7be, "dsa_devlink_resource_register" },
	{ 0xfdebfa59, "dsa_register_switch" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "libphy,dsa_core,phylink");


MODULE_INFO(srcversion, "0A8EBB137ED02045CBF5FE0");
