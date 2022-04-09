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
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdf52d9e5, "netdev_set_num_tc" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x61f6ca8f, "macsec_pn_wrapped" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe1909acd, "netdev_set_tc_queue" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0x4836c822, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x5c74cbaa, "dev_open" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf3a03378, "eth_get_headlen" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0xbae13367, "skb_add_rx_frag" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf7370f56, "system_state" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x8b9e8fd9, "platform_get_ethdev_address" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "macsec");

MODULE_ALIAS("pci:v00001D6Ad00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad0000D109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000000B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000007B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000008B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000009B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000011B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000012B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000080B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000087B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000088B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000089B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000091B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000092B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000094C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000093C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000004C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000014C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000012C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000034C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D6Ad000011C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4598BDD7E8A1E9CC6A00066");
