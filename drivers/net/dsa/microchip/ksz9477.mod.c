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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x2ab42891, "ksz_port_bridge_join" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa31d93b2, "ksz_get_ethtool_stats" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6fd65f56, "ksz_init_mib_timer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf7175300, "regmap_read" },
	{ 0x72dff284, "ksz_switch_register" },
	{ 0x861689c6, "ksz_port_bridge_leave" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc89d31e9, "phy_remove_link_mode" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc14102b3, "ksz_update_port_member" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x899b8001, "ksz_port_fast_age" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x83fdb7cc, "ksz_mac_link_down" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7fba992b, "ksz_enable_port" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x76c28c6, "ksz_sset_count" },
};

MODULE_INFO(depends, "ksz_common,libphy");


MODULE_INFO(srcversion, "47782963501EBAE57EAAF39");
