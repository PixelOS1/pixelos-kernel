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
	{ 0x7e0db070, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x1f5fc01d, "mt76x02_phy_set_txpower" },
	{ 0xaa4af8f6, "mt76x02_mcu_calibrate" },
	{ 0x1d03f156, "mt76x02_eeprom_copy" },
	{ 0xfc3473ed, "mt76_get_sar_power" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5bfa1090, "mt76x02_get_lna_gain" },
	{ 0x58a22931, "mt76_eeprom_override" },
	{ 0x26ce4c9a, "mt76_mcu_send_and_get_msg" },
	{ 0x6ef3f5d8, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3c21737c, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xc6d810ea, "mt76x02_get_rx_gain" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x690f058, "mt76x02_get_efuse_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2db45c87, "mt76x02_ext_pa_enabled" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ffe5462, "cfg80211_chandef_valid" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc3ec26cf, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xa165b5d2, "mt76x02_phy_adjust_vga_gain" },
	{ 0x7135c0d, "mt76_init_sar_power" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211");


MODULE_INFO(srcversion, "E00638448EA942CAE5077EE");
