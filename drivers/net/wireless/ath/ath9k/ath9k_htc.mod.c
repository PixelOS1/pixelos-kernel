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
	{ 0xabaee24e, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1056d7cd, "ath9k_hw_set_txq_props" },
	{ 0xdf5af456, "ieee80211_csa_finish" },
	{ 0xc55eea4c, "ath9k_hw_init" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x9a330012, "ath9k_cmn_get_channel" },
	{ 0xc80af728, "ath9k_hw_deinit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x21752e, "device_release_driver" },
	{ 0x6eef7bbf, "ath9k_hw_set_gpio" },
	{ 0xb84e9e6d, "ath9k_cmn_init_crypto" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x613309ca, "ath9k_cmn_process_rate" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xec2e96d6, "ath9k_hw_btcoex_enable" },
	{ 0x1b14451, "ath9k_hw_wait" },
	{ 0xb02838ef, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xb6fdaa6f, "ath9k_hw_stopdmarecv" },
	{ 0xca76a1a3, "ath_key_delete" },
	{ 0x3381c4b, "ath9k_cmn_update_txpow" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0x5866ce71, "ath9k_hw_gpio_get" },
	{ 0xd8b88a68, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ffd2fb2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xc9325235, "ath9k_hw_setrxfilter" },
	{ 0x500b28df, "ath9k_hw_get_txq_props" },
	{ 0xd40697e3, "ath9k_hw_releasetxqueue" },
	{ 0x31342c75, "ath9k_hw_reset_tsf" },
	{ 0xbaa467f1, "wiphy_rfkill_start_polling" },
	{ 0x168f7fed, "usb_get_urb" },
	{ 0x901a6d58, "ath9k_cmn_reload_chainmask" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc19f3811, "ath9k_cmn_init_channels_rates" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x293c1990, "ieee80211_tx_status" },
	{ 0xadede681, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8d071463, "ath9k_hw_setopmode" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9bf6f4d5, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf51c2135, "ath9k_hw_resettxqueue" },
	{ 0xe2d32ebb, "ath9k_hw_gettsf64" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xba93ee29, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xc03aaa42, "ath9k_hw_set_tsfadjust" },
	{ 0x76b2f66d, "ath9k_cmn_beacon_config_ap" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x22e01c02, "ath9k_hw_btcoex_disable" },
	{ 0xb870740b, "ath9k_hw_getrxfilter" },
	{ 0xd6e30f8d, "ath9k_hw_ani_monitor" },
	{ 0xc2b012f1, "ath_is_mybeacon" },
	{ 0x6282aa8, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0xc958df0c, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x83ac2164, "ath9k_cmn_process_rssi" },
	{ 0x5a921311, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x654f380c, "ath9k_hw_write_associd" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xf473e0c2, "ath_reg_notifier_apply" },
	{ 0xe3b9a1d6, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xae0aeae2, "ath9k_hw_init_btcoex_hw" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xf882142, "ath9k_hw_beaconq_setup" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x1813d8f, "ath9k_hw_name" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x5ea548ed, "ath9k_hw_init_global_settings" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa41233ca, "ath9k_hw_settsf64" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb0cb3b0f, "ath9k_hw_beaconinit" },
	{ 0x92997ed8, "_printk" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3b865cca, "ieee80211_get_buffered_bc" },
	{ 0x5f219c43, "usb_interrupt_msg" },
	{ 0x6c7dd92f, "ath9k_hw_gpio_free" },
	{ 0x4c32e465, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb285eb5d, "ath9k_hw_setrxabort" },
	{ 0x4e361ec, "ath9k_cmn_beacon_config_sta" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb830146f, "ath_hw_setbssidmask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3227f772, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x2005ca6a, "ath9k_hw_phy_disable" },
	{ 0x3952e149, "__ieee80211_get_radio_led_name" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0xadf05762, "ath9k_hw_setpower" },
	{ 0x3e1c74bb, "__ieee80211_create_tpt_led_trigger" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x15c53693, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbd8f4506, "ath9k_hw_setmcastfilter" },
	{ 0x65a526db, "ieee80211_start_tx_ba_session" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x90e7edf3, "ath9k_hw_gpio_request_out" },
	{ 0xa6656dba, "ath9k_hw_startpcureceive" },
	{ 0x8aed39ef, "ath9k_hw_setuptxqueue" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x6df7c6f8, "ath9k_hw_reset" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xee1b4f26, "ath9k_cmn_rx_accept" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x302abc7b, "ath9k_hw_btcoex_init_3wire" },
	{ 0xf3ae74a1, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x626dc38f, "ath9k_hw_reset_calvalid" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211,rfkill");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C0597E817BA67CFACCEC0D0");
