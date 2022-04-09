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
	{ 0x4f4e8d15, "iw_handler_set_thrspy" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0xc9ede2c1, "crypto_alloc_shash" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xfda27c91, "cfg80211_inform_bss_data" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x803d2c61, "cfg80211_wext_siwscan" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xa7bb651d, "cfg80211_wext_giwretry" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xe94c52b2, "crypto_shash_final" },
	{ 0x5fc67252, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x27bc460e, "cfg80211_wext_siwmode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xa7a239ba, "wireless_spy_update" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3caad30b, "crypto_shash_update" },
	{ 0xf3a41c6, "iw_handler_get_spy" },
	{ 0xda59b65, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2891d7a7, "wireless_send_event" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x459f3f88, "skb_push" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x680d6a56, "cfg80211_wext_giwfrag" },
	{ 0xa4881569, "crypto_shash_setkey" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xb305a2b7, "cfg80211_wext_siwrts" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4e319b37, "iw_handler_get_thrspy" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x33d40efc, "cfg80211_wext_giwrange" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe781bf9f, "cfg80211_wext_giwmode" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x893b1af9, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf1fa734, "cfg80211_wext_giwname" },
	{ 0x69acdf38, "memcpy" },
	{ 0xca06b0d8, "cfg80211_wext_giwscan" },
	{ 0x1564421, "request_firmware" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xe21d4bc2, "cfg80211_wext_giwrts" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4833f70c, "cfg80211_wext_siwfrag" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A91E1B32F938818CEBFE8E6");
