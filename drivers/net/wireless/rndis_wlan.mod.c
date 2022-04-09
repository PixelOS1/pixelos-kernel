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
	{ 0xc8a016aa, "param_ops_string" },
	{ 0xee111615, "param_ops_int" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xc70dc5a7, "usbnet_tx_timeout" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xec297bc5, "usbnet_start_xmit" },
	{ 0x13864ccb, "usbnet_stop" },
	{ 0x97d1db56, "usbnet_open" },
	{ 0x9f018045, "rndis_tx_fixup" },
	{ 0xc1eaf784, "rndis_rx_fixup" },
	{ 0x3d222f90, "rndis_status" },
	{ 0xd15f0f60, "usbnet_resume" },
	{ 0xa8378ebb, "usbnet_suspend" },
	{ 0xc37b7ea4, "usbnet_disconnect" },
	{ 0x9f4d6962, "usbnet_probe" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x128ad987, "usbnet_purge_paused_rxq" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0x1f35d798, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0xfd11e320, "cfg80211_disconnected" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x74175c61, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe0a1731f, "cfg80211_cqm_rssi_notify" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x4e4a20e6, "cfg80211_roamed" },
	{ 0xe30194b1, "cfg80211_ibss_joined" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82fc53a6, "usbnet_resume_rx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xfda27c91, "cfg80211_inform_bss_data" },
	{ 0xb1e54e7c, "cfg80211_connect_done" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x95bf1563, "rndis_command" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe4b4c967, "cfg80211_pmksa_candidate_notify" },
	{ 0xb8071df2, "cfg80211_michael_mic_failure" },
	{ 0x2462ca, "usbnet_pause_rx" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x84dcf661, "netdev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "C2A9AF906A339B0C4A3E14C");
