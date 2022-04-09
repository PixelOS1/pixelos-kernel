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
	{ 0x7792a5c9, "mt76x02_mac_start" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x2337073d, "mt76x2_phy_set_txpower" },
	{ 0x7b9e08ab, "mt76x2_phy_set_txpower_regs" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xf0341533, "mt76x2_read_rx_gain" },
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x46b268d9, "mt76x02_mac_wcid_setup" },
	{ 0x9f8ad4e3, "mt76x2_get_temp_comp" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x96791cd, "mt76_sta_pre_rcu_remove" },
	{ 0x8ffe009c, "mt76_sw_scan" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xeea667d8, "mt76x02_mcu_function_select" },
	{ 0x44380af0, "mt76x02_conf_tx" },
	{ 0xaa4af8f6, "mt76x02_mcu_calibrate" },
	{ 0xfdf64c0c, "mt76x02_ampdu_action" },
	{ 0xb49cc50e, "mt76x02_mcu_cleanup" },
	{ 0xeaecfc6a, "mt76x02_tx_prepare_skb" },
	{ 0xfc3473ed, "mt76_get_sar_power" },
	{ 0xadea3f57, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x5dc887a9, "mt76x02_dfs_init_params" },
	{ 0x9c2bf82e, "mt76x02_add_interface" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ce2d7a, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0x377f5b98, "mt76x2_phy_update_channel_gain" },
	{ 0x2c3157f, "mt76x02_init_agc_gain" },
	{ 0x84baeffb, "mt76x02_bss_info_changed" },
	{ 0xb20d04e8, "mt76x02_mac_cc_reset" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x61d490e0, "mt76x2_phy_tssi_compensate" },
	{ 0xa4f7d906, "mt76x02_mcu_msg_send" },
	{ 0xa7924863, "mt76_sta_state" },
	{ 0x116e3be6, "mt76x02_tx_complete_skb" },
	{ 0x69d1168e, "mt76x02_set_rts_threshold" },
	{ 0x37e2f072, "mt76x2_mcu_init_gain" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf35f7d6b, "mt76_get_survey" },
	{ 0x973bdac9, "mt76x02_init_debugfs" },
	{ 0x1017cf47, "mt76x2_init_txpower" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x33310f2e, "mt76x2_mcu_load_cr" },
	{ 0x55971ffa, "mt76_unregister_device" },
	{ 0xca3ee55, "mt76x02_sta_add" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5fd44a80, "mt76x2_eeprom_init" },
	{ 0xcb4c5580, "mt76x02_edcca_init" },
	{ 0xb5ba371f, "mt76x02_sta_remove" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x47804ad6, "mt76_mmio_init" },
	{ 0x5c3baba1, "mt76x02_tx" },
	{ 0xb6dd8ad7, "__mt76_poll_msec" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x822dfe0c, "mt76x02_init_device" },
	{ 0x4779daac, "mt76_set_channel" },
	{ 0xf3135b57, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0x6e0238c9, "mt76x02_phy_set_bw" },
	{ 0x1dcfa62f, "mt76x02_sw_scan_complete" },
	{ 0x10daea57, "mt76_set_tim" },
	{ 0x47081865, "mt76_register_device" },
	{ 0xb90de4cb, "mt76x02_mac_setaddr" },
	{ 0x273b859a, "mt76x02_rx_poll_complete" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x1ba3c76d, "kthread_unpark" },
	{ 0x6c04f8e0, "mt76x02_queue_rx_skb" },
	{ 0x44d7c8c6, "mt76_free_device" },
	{ 0x472aaa22, "mt76x02_configure_filter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x650680e2, "mt76_pci_disable_aspm" },
	{ 0x57493f3a, "mt76x2_configure_tx_delay" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xf61fca09, "mt76x02_update_channel" },
	{ 0xb71900d, "mt76x02_set_tx_ackto" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x263137de, "mt76x2_mac_stop" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x300d5a29, "mt76x02_set_coverage_class" },
	{ 0x2db45c87, "mt76x02_ext_pa_enabled" },
	{ 0x6059341d, "mt76x02_mac_shared_key_setup" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x3c87c1bf, "mt76_alloc_device" },
	{ 0x30faf997, "mt76x02_reconfig_complete" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x9b0993d0, "mt76_dma_cleanup" },
	{ 0x844d65c7, "kthread_park" },
	{ 0xb5ca0ff7, "mt76x02_sta_rate_tbl_update" },
	{ 0x52e0bd51, "mt76x2_set_sar_specs" },
	{ 0x12f7a786, "mt76x02_sta_ps" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7b734ea7, "mt76x2_apply_gain_adj" },
	{ 0xcfcc1612, "mt76_set_stream_caps" },
	{ 0x4c9eef4, "mt76_get_antenna" },
	{ 0x661ad8d9, "mt76x02e_init_beacon_config" },
	{ 0xa0dde249, "mt76_wake_tx_queue" },
	{ 0xf258b983, "mt76x02_mcu_set_radio_state" },
	{ 0xe27cf580, "mt76x02_dma_disable" },
	{ 0x737c11a4, "mt76x2_mcu_set_channel" },
	{ 0x6fcb7da4, "mt76x2_reset_wlan" },
	{ 0xfd4bfe5c, "mt76_write_mac_initvals" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x3ec6ff, "mt76_get_txpower" },
	{ 0x1564421, "request_firmware" },
	{ 0xfffb16eb, "mt76_release_buffered_frames" },
	{ 0xacb44a73, "mt76x02_mcu_parse_response" },
	{ 0xbb8ca96f, "mt76x02_set_key" },
	{ 0x976fdcc3, "mt76x02_tx_set_txpwr_auto" },
	{ 0xe4558312, "mt76x02_set_ethtool_fwver" },
	{ 0xd46727d8, "pci_choose_state" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xa76bb1b2, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "797ED145D609AD3802D0B06");
