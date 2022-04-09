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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x67befb88, "mt76x02_mac_set_beacon" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xb9cb1f33, "mt76_skb_adjust_pad" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ed88e0a, "mt76u_vendor_request" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdbe42114, "mt76x02_mac_write_txwi" },
	{ 0xe52fd38e, "mt76x02_init_beacon_config" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x2bd1178a, "mt76_csa_finish" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x30f5ea80, "usb_bulk_msg" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2a20b3f0, "mt76x02_mac_reset_counters" },
	{ 0xcce3aad0, "__mt76_tx_complete_skb" },
	{ 0x8dfb683e, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x9721127a, "mt76_tx_status_skb_add" },
	{ 0xc33e4d4, "mt76_csa_check" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xacb44a73, "mt76x02_mcu_parse_response" },
	{ 0xce68e8, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c9e69dc, "mt76x02_resync_beacon_timer" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc85d1d21, "mt76x02_remove_hdr_pad" },
	{ 0x24674993, "mt76x02_enqueue_buffered_bc" },
	{ 0x859b7c57, "ieee80211_iterate_interfaces" },
	{ 0xaefeb5f1, "mt76x02_update_beacon_iter" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,mt76-usb,cfg80211,mac80211");


MODULE_INFO(srcversion, "4DAC7789A1B9837C9709B51");
