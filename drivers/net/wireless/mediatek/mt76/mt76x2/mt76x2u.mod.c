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
	{ 0x6c769581, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x88feb4a4, "mt76x02_phy_set_txdac" },
	{ 0x2337073d, "mt76x2_phy_set_txpower" },
	{ 0x7b9e08ab, "mt76x2_phy_set_txpower_regs" },
	{ 0xf0341533, "mt76x2_read_rx_gain" },
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0x46b268d9, "mt76x02_mac_wcid_setup" },
	{ 0x96791cd, "mt76_sta_pre_rcu_remove" },
	{ 0x8ffe009c, "mt76_sw_scan" },
	{ 0xeea667d8, "mt76x02_mcu_function_select" },
	{ 0x44380af0, "mt76x02_conf_tx" },
	{ 0xaa4af8f6, "mt76x02_mcu_calibrate" },
	{ 0xfdf64c0c, "mt76x02_ampdu_action" },
	{ 0xa6b18737, "mt76u_stop_rx" },
	{ 0xfc3473ed, "mt76_get_sar_power" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x9c2bf82e, "mt76x02_add_interface" },
	{ 0x2ed88e0a, "mt76u_vendor_request" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x8c81b9e5, "mt76x02u_init_beacon_config" },
	{ 0xd6ad4484, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6a749fb, "mt76u_alloc_queues" },
	{ 0xe4ce2d7a, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x377f5b98, "mt76x2_phy_update_channel_gain" },
	{ 0x2c3157f, "mt76x02_init_agc_gain" },
	{ 0x84baeffb, "mt76x02_bss_info_changed" },
	{ 0xb20d04e8, "mt76x02_mac_cc_reset" },
	{ 0xa17d0175, "mt76x02u_mac_start" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x61d490e0, "mt76x2_phy_tssi_compensate" },
	{ 0xa7924863, "mt76_sta_state" },
	{ 0x37e2f072, "mt76x2_mcu_init_gain" },
	{ 0xdc3937dc, "mt76x02u_tx_prepare_skb" },
	{ 0xbe08985a, "mt76x02u_init_mcu" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x973bdac9, "mt76x02_init_debugfs" },
	{ 0xf35f7d6b, "mt76_get_survey" },
	{ 0x4efa5e62, "mt76u_init" },
	{ 0x5416fb9a, "mt76x02u_mcu_fw_send_data" },
	{ 0x1017cf47, "mt76x2_init_txpower" },
	{ 0x33310f2e, "mt76x2_mcu_load_cr" },
	{ 0xca3ee55, "mt76x02_sta_add" },
	{ 0x37b0eba4, "mt76x02_tx_status_data" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcb4c5580, "mt76x02_edcca_init" },
	{ 0x27a9bafc, "mt76x02_phy_set_rxpath" },
	{ 0xb5ba371f, "mt76x02_sta_remove" },
	{ 0x6ef3f5d8, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x5c3baba1, "mt76x02_tx" },
	{ 0xb6dd8ad7, "__mt76_poll_msec" },
	{ 0x822dfe0c, "mt76x02_init_device" },
	{ 0x4779daac, "mt76_set_channel" },
	{ 0xf3135b57, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6e0238c9, "mt76x02_phy_set_bw" },
	{ 0x1dcfa62f, "mt76x02_sw_scan_complete" },
	{ 0x10daea57, "mt76_set_tim" },
	{ 0x47081865, "mt76_register_device" },
	{ 0xb90de4cb, "mt76x02_mac_setaddr" },
	{ 0xfc4f04a5, "mt76x02u_mcu_fw_reset" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xb693a431, "mt76u_queues_deinit" },
	{ 0x6c04f8e0, "mt76x02_queue_rx_skb" },
	{ 0x44d7c8c6, "mt76_free_device" },
	{ 0x472aaa22, "mt76x02_configure_filter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x57493f3a, "mt76x2_configure_tx_delay" },
	{ 0xf61fca09, "mt76x02_update_channel" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x263137de, "mt76x2_mac_stop" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x2db45c87, "mt76x02_ext_pa_enabled" },
	{ 0x6059341d, "mt76x02_mac_shared_key_setup" },
	{ 0x3c87c1bf, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb5ca0ff7, "mt76x02_sta_rate_tbl_update" },
	{ 0x3b8c0b86, "mt76u_resume_rx" },
	{ 0x52e0bd51, "mt76x2_set_sar_specs" },
	{ 0x12f7a786, "mt76x02_sta_ps" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7b734ea7, "mt76x2_apply_gain_adj" },
	{ 0x4c9eef4, "mt76_get_antenna" },
	{ 0xa0dde249, "mt76_wake_tx_queue" },
	{ 0xf258b983, "mt76x02_mcu_set_radio_state" },
	{ 0x737c11a4, "mt76x2_mcu_set_channel" },
	{ 0x6fcb7da4, "mt76x2_reset_wlan" },
	{ 0xfd4bfe5c, "mt76_write_mac_initvals" },
	{ 0x3ec6ff, "mt76_get_txpower" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xfffb16eb, "mt76_release_buffered_frames" },
	{ 0xbb8ca96f, "mt76x02_set_key" },
	{ 0xe4558312, "mt76x02_set_ethtool_fwver" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x70c032a5, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B91D5A535A0ECAD5A2F67EB");
