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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee111615, "param_ops_int" },
	{ 0xb1124694, "usb_init_urb" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x921a7980, "usb_unanchor_urb" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4144c8c5, "usb_deregister" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb03de8cd, "ieee80211_ave_rssi" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0xfc2aaf45, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78ed0655, "usb_reset_device" },
	{ 0x470af718, "usb_put_dev" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0x92997ed8, "_printk" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x15a37cf3, "cfg80211_calculate_bitrate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x65a526db, "ieee80211_start_tx_ba_session" },
	{ 0xa9e94dda, "usb_register_driver" },
	{ 0x1564421, "request_firmware" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pA611d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1058p0631d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04BBp094Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1E1Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:vCDABp8010d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v04BBp0950d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v06F8pE035d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0789p016Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp2E2Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0107d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2019pAB33d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Cd*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "BD7F504D52B7BA52D110BE7");
