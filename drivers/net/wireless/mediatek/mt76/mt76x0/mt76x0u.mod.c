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
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0x96791cd, "mt76_sta_pre_rcu_remove" },
	{ 0x8ffe009c, "mt76_sw_scan" },
	{ 0x44380af0, "mt76x02_conf_tx" },
	{ 0xfdf64c0c, "mt76x02_ampdu_action" },
	{ 0xa6b18737, "mt76u_stop_rx" },
	{ 0xe1aa60f9, "mt76x02u_exit_beacon_config" },
	{ 0x9c2bf82e, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2ed88e0a, "mt76u_vendor_request" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x8c81b9e5, "mt76x02u_init_beacon_config" },
	{ 0xd6ad4484, "mt76u_stop_tx" },
	{ 0x6a749fb, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x84baeffb, "mt76x02_bss_info_changed" },
	{ 0xa17d0175, "mt76x02u_mac_start" },
	{ 0x58ca1aea, "mt76x0_init_hardware" },
	{ 0xa7924863, "mt76_sta_state" },
	{ 0x69d1168e, "mt76x02_set_rts_threshold" },
	{ 0xdc3937dc, "mt76x02u_tx_prepare_skb" },
	{ 0xbe08985a, "mt76x02u_init_mcu" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf35f7d6b, "mt76_get_survey" },
	{ 0x4efa5e62, "mt76u_init" },
	{ 0x5416fb9a, "mt76x02u_mcu_fw_send_data" },
	{ 0xbdeb01b3, "mt76x0_mac_stop" },
	{ 0xca3ee55, "mt76x02_sta_add" },
	{ 0x37b0eba4, "mt76x02_tx_status_data" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb5ba371f, "mt76x02_sta_remove" },
	{ 0x5c3baba1, "mt76x02_tx" },
	{ 0xb6dd8ad7, "__mt76_poll_msec" },
	{ 0x1dcfa62f, "mt76x02_sw_scan_complete" },
	{ 0x10daea57, "mt76_set_tim" },
	{ 0xd0d965d1, "mt76x0_phy_calibrate" },
	{ 0xfc4f04a5, "mt76x02u_mcu_fw_reset" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1f9495f1, "mt76x0_register_device" },
	{ 0x557762be, "mt76x0_config" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xb693a431, "mt76u_queues_deinit" },
	{ 0x6c04f8e0, "mt76x02_queue_rx_skb" },
	{ 0xde9c62f, "mt76x0_chip_onoff" },
	{ 0x44d7c8c6, "mt76_free_device" },
	{ 0x472aaa22, "mt76x02_configure_filter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0xf61fca09, "mt76x02_update_channel" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x470af718, "usb_put_dev" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3c87c1bf, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb5ca0ff7, "mt76x02_sta_rate_tbl_update" },
	{ 0x3b8c0b86, "mt76u_resume_rx" },
	{ 0x12f7a786, "mt76x02_sta_ps" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c9eef4, "mt76_get_antenna" },
	{ 0xa0dde249, "mt76_wake_tx_queue" },
	{ 0x3ec6ff, "mt76_get_txpower" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0xfffb16eb, "mt76_release_buffered_frames" },
	{ 0xbb8ca96f, "mt76x02_set_key" },
	{ 0x4c681602, "firmware_request_nowarn" },
	{ 0xe41c6924, "mt76x0_set_sar_specs" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x70c032a5, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "93508BD26A7AF9B61F3A7EB");
