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
	{ 0xc97322ad, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xeed42f1c, "ieee802154_hdr_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x9401f96b, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x580c7919, "bpf_trace_run3" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x63dcb58f, "crypto_alloc_sync_skcipher" },
	{ 0xc29fb1aa, "ieee802154_hdr_pull" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x1398b16b, "bpf_trace_run1" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xda59b65, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x43f2b4dd, "wpan_phy_free" },
	{ 0x9b32ddab, "ieee802154_hdr_peek" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x3b306ed5, "crypto_aead_encrypt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x18c363ff, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x92b1f0de, "crypto_aead_setkey" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x804722e5, "crypto_skcipher_decrypt" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe3c3d43, "crypto_destroy_tfm" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x827768d, "wpan_phy_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4d1fb8d, "ieee802154_hdr_peek_addrs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x7f22e08b, "crypto_skcipher_setkey" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x18def21a, "crypto_aead_decrypt" },
	{ 0xb6fe978, "crypto_aead_setauthsize" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0xa3742208, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x8275e41d, "dev_alloc_name" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xfc053949, "bpf_trace_run4" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x3776072a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "FC065CA37C6C1E0CB6A6F15");
