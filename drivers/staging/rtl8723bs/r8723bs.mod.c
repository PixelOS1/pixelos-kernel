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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x829ec15f, "sdio_writeb" },
	{ 0x984e4952, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0x5ceee454, "cfg80211_unlink_bss" },
	{ 0xb1e54e7c, "cfg80211_connect_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdee9ca0c, "find_vpid" },
	{ 0xa11aa524, "sdio_enable_func" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x9a9a7ce8, "cfg80211_chandef_create" },
	{ 0x8543f41c, "sdio_claim_irq" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xd94be29, "cfg80211_unregister_wdev" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1ac99c01, "cfg80211_mgmt_tx_status" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xea82d402, "sdio_writel" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x1eacc5f8, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xda59b65, "free_netdev" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x133536b8, "register_netdev" },
	{ 0x7d95aac8, "sdio_readl" },
	{ 0x9126fd2c, "cfg80211_del_sta_sinfo" },
	{ 0x66ea9177, "cfg80211_rx_mgmt_khz" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x652032cb, "mac_pton" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0xb8071df2, "cfg80211_michael_mic_failure" },
	{ 0x2ce7e85e, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa048a707, "kill_pid" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xe30194b1, "cfg80211_ibss_joined" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x886e2a58, "flush_signals" },
	{ 0xd52865d, "sdio_unregister_driver" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x4e4a20e6, "cfg80211_roamed" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xdcc5d240, "sdio_release_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfd11e320, "cfg80211_disconnected" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x527bd5c8, "cfg80211_new_sta" },
	{ 0xe561a752, "netdev_emerg" },
	{ 0x6b69f578, "sdio_memcpy_toio" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x8275e41d, "dev_alloc_name" },
	{ 0x96848186, "scnprintf" },
	{ 0x1564421, "request_firmware" },
	{ 0x7fd7e3f3, "cfg80211_register_netdevice" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x37db8a39, "sdio_register_driver" },
	{ 0x8fff1d41, "sdio_memcpy_fromio" },
	{ 0x47fce9c2, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0x24e48d13, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x42c8fe04, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x86097c08, "sdio_disable_func" },
	{ 0x91ef55e7, "sdio_release_host" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xf92fe366, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "mmc_core,cfg80211,libarc4");

MODULE_ALIAS("sdio:c*v024Cd0523*");
MODULE_ALIAS("sdio:c*v024Cd0525*");
MODULE_ALIAS("sdio:c*v024Cd0623*");
MODULE_ALIAS("sdio:c*v024Cd0626*");
MODULE_ALIAS("sdio:c*v024Cd0627*");
MODULE_ALIAS("sdio:c*v024CdB723*");

MODULE_INFO(srcversion, "F27B194378D8C946B5242E8");
