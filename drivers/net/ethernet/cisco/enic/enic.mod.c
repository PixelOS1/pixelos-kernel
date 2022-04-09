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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xe5855ceb, "pci_enable_sriov" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x7714a710, "__napi_schedule_irqoff" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x18e7429a, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xebb49c23, "pci_disable_sriov" },
	{ 0x7605b39d, "__hw_addr_sync_dev" },
	{ 0x5ee16721, "flow_get_u32_src" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2b6af903, "call_netdevice_notifiers" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xdc6b949c, "rps_may_expire_flow" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xb19b445, "ioread8" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0xb2e60a53, "netif_set_xps_queue" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x133536b8, "register_netdev" },
	{ 0x7d11271e, "nla_put" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xe273d75d, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x7732159c, "free_irq_cpu_rmap" },
	{ 0x5c74cbaa, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xfebd599, "__hw_addr_unsync_dev" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x44a6e90a, "irq_cpu_rmap_add" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xa934bc4b, "flow_get_u32_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x24e48d13, "skb_put" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xb24a808, "pci_find_ext_capability" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001137d00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001137d00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001137d00000071sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADE9607F5BF8BDED04491CF");
