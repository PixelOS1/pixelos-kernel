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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x7e0db070, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x88feb4a4, "mt76x02_phy_set_txdac" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0x46b268d9, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x1f5fc01d, "mt76x02_phy_set_txpower" },
	{ 0xeea667d8, "mt76x02_mcu_function_select" },
	{ 0xaa4af8f6, "mt76x02_mcu_calibrate" },
	{ 0x1d03f156, "mt76x02_eeprom_copy" },
	{ 0xfc3473ed, "mt76_get_sar_power" },
	{ 0xadea3f57, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5dc887a9, "mt76x02_dfs_init_params" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ce2d7a, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2c3157f, "mt76x02_init_agc_gain" },
	{ 0xb20d04e8, "mt76x02_mac_cc_reset" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x973bdac9, "mt76x02_init_debugfs" },
	{ 0x5bfa1090, "mt76x02_get_lna_gain" },
	{ 0x58a22931, "mt76_eeprom_override" },
	{ 0xcb4c5580, "mt76x02_edcca_init" },
	{ 0x27a9bafc, "mt76x02_phy_set_rxpath" },
	{ 0x6ef3f5d8, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0xb6dd8ad7, "__mt76_poll_msec" },
	{ 0x822dfe0c, "mt76x02_init_device" },
	{ 0x4779daac, "mt76_set_channel" },
	{ 0xf3135b57, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6e0238c9, "mt76x02_phy_set_bw" },
	{ 0x47081865, "mt76_register_device" },
	{ 0xb90de4cb, "mt76x02_mac_setaddr" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3c21737c, "mt76_eeprom_init" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xc6d810ea, "mt76x02_get_rx_gain" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x690f058, "mt76x02_get_efuse_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2db45c87, "mt76x02_ext_pa_enabled" },
	{ 0x6059341d, "mt76x02_mac_shared_key_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x3ffe5462, "cfg80211_chandef_valid" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc3ec26cf, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xa165b5d2, "mt76x02_phy_adjust_vga_gain" },
	{ 0x7135c0d, "mt76_init_sar_power" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "FDAB8CF99E8F2382CEF62FB");
