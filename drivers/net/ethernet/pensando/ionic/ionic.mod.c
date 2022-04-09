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
	{ 0xe9779ce9, "devlink_port_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x53b954a2, "up_read" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xe5855ceb, "pci_enable_sriov" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc0aabb45, "ptp_schedule_worker" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x7714a710, "__napi_schedule_irqoff" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xebb49c23, "pci_disable_sriov" },
	{ 0x7605b39d, "__hw_addr_sync_dev" },
	{ 0x6e3347ec, "devlink_priv" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x3b3d2c1e, "pcie_print_link_status" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x94216657, "seq_read" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x668b19a1, "down_read" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0x2c66ac85, "devlink_info_serial_number_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xb19b445, "ioread8" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3ffb9822, "debugfs_create_u64" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0xce807a25, "up_write" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd9d0a2af, "devlink_flash_update_timeout_notify" },
	{ 0x942c9fdc, "devlink_port_unregister" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x4213e52a, "pci_iomap_range" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x90688bcd, "devlink_info_driver_name_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf163e5d3, "debugfs_create_regset32" },
	{ 0x21075824, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xe23465d3, "eth_prepare_mac_addr_change" },
	{ 0x7f52071a, "net_dim" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6019792c, "debugfs_create_x64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x715a43ce, "priv_to_devlink" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xb1647fc2, "devlink_info_version_running_put" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x4c41c60, "devlink_flash_update_status_notify" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf6f4aaa6, "eth_commit_mac_addr_change" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x660eb6bd, "devlink_free" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xc498bdc9, "devlink_register" },
	{ 0x3e4e0a9e, "devlink_alloc_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x71d4d445, "debugfs_create_blob" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x2c4614c4, "devlink_port_attrs_set" },
	{ 0xbae13367, "skb_add_rx_frag" },
	{ 0xd4ba1b3f, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x607c4683, "devlink_info_version_fixed_put" },
	{ 0xee586da4, "napi_get_frags" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x946c0028, "devlink_unregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x91f93007, "devlink_port_type_eth_set" },
	{ 0x522543a2, "napi_gro_frags" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001DD8d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001DD8d00001003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "84C02103715DC23B4BDB3DC");