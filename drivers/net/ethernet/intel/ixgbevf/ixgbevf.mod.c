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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xee111615, "param_ops_int" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x776811b4, "napi_consume_skb" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x7714a710, "__napi_schedule_irqoff" },
	{ 0x8f8fabb5, "xdp_master_redirect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xca41538, "xdp_rxq_info_reg" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa9ded13c, "napi_build_skb" },
	{ 0xf3086ff4, "xdp_rxq_info_unreg" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4d276695, "__page_frag_cache_drain" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x898940c7, "__SCK__tp_func_xdp_exception" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf3a03378, "eth_get_headlen" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x21075824, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xbae13367, "skb_add_rx_frag" },
	{ 0xedc03953, "iounmap" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdb80958, "bpf_warn_invalid_xdp_action" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x755869f2, "bpf_prog_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xf0937a14, "dev_get_stats" },
	{ 0x8fa9d9e8, "__SCT__tp_func_xdp_exception" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x30d23ac0, "secpath_set" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa4b78250, "__tracepoint_xdp_exception" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000010EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001515sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001565sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55AC9CA6B7F03DA4DBA3B9D");
