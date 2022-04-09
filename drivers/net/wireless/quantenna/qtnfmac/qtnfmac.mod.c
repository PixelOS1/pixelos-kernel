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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0xb1e54e7c, "cfg80211_connect_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xbd4d6055, "regulatory_set_wiphy_regd" },
	{ 0x754d539c, "strlen" },
	{ 0xc274b6f2, "cfg80211_shutdown_all_interfaces" },
	{ 0xfda27c91, "cfg80211_inform_bss_data" },
	{ 0xe54ae7a7, "netdev_walk_all_lower_dev" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xd94be29, "cfg80211_unregister_wdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1eacc5f8, "cfg80211_get_bss" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xda59b65, "free_netdev" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x50ccef1a, "cfg80211_update_owe_info_event" },
	{ 0x9126fd2c, "cfg80211_del_sta_sinfo" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x66ea9177, "cfg80211_rx_mgmt_khz" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2ce7e85e, "wiphy_apply_custom_regulatory" },
	{ 0xb8071df2, "cfg80211_michael_mic_failure" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa09a7616, "cfg80211_get_drvinfo" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd79a9944, "__cfg80211_radar_event" },
	{ 0x7f36f086, "cfg80211_check_combinations" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x2b695e71, "cfg80211_ch_switch_notify" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x67f5ddb3, "netdev_port_same_parent_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0xfd11e320, "cfg80211_disconnected" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x527bd5c8, "cfg80211_new_sta" },
	{ 0x3ffe5462, "cfg80211_chandef_valid" },
	{ 0xc03995d7, "cfg80211_external_auth_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7fd7e3f3, "cfg80211_register_netdevice" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x818d68da, "cfg80211_cac_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A10E5C801B3104B5CBF7DD3");
