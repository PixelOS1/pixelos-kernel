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
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xe5855ceb, "pci_enable_sriov" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0xee111615, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x90a8acca, "pci_sriov_set_totalvfs" },
	{ 0x776811b4, "napi_consume_skb" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x8f8fabb5, "xdp_master_redirect" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xca41538, "xdp_rxq_info_reg" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xebb49c23, "pci_disable_sriov" },
	{ 0x7605b39d, "__hw_addr_sync_dev" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa9ded13c, "napi_build_skb" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xf3086ff4, "xdp_rxq_info_unreg" },
	{ 0x64fc2bc5, "flow_rule_match_vlan" },
	{ 0xfa6ca004, "driver_for_each_device" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4d276695, "__page_frag_cache_drain" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x751449d4, "dca3_get_tag" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0x4836c822, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x898940c7, "__SCK__tp_func_xdp_exception" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xdb138d2e, "eth_platform_get_mac_address" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x133536b8, "register_netdev" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x6216cbf0, "pci_device_is_present" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x26859bbb, "xdp_return_frame" },
	{ 0x331c7db8, "dca_add_requester" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4ea5d10, "ksize" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x36c44c72, "flow_rule_match_basic" },
	{ 0xc4027896, "flow_block_cb_setup_simple" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf3a03378, "eth_get_headlen" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfebd599, "__hw_addr_unsync_dev" },
	{ 0x21075824, "__free_pages" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x102755a2, "ndo_dflt_fdb_add" },
	{ 0x23bef2ee, "pm_schedule_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x5f0cf6d6, "ptp_find_pin" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xf9d27eeb, "xdp_rxq_info_reg_mem_model" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x20585fd4, "xdp_rxq_info_unreg_mem_model" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0xcfab2e53, "xdp_do_redirect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xdcf6bbc2, "dev_trans_start" },
	{ 0xbae13367, "skb_add_rx_frag" },
	{ 0x883c1ab6, "flow_rule_match_eth_addrs" },
	{ 0xd4ba1b3f, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf7370f56, "system_state" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xfd59037c, "xdp_convert_zc_to_xdp_frame" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xbdb80958, "bpf_warn_invalid_xdp_action" },
	{ 0x61a67417, "i2c_bit_add_bus" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xde491932, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x17831320, "dca_remove_requester" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x24e48d13, "skb_put" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0xe0cce0fe, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x755869f2, "bpf_prog_put" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x8fa9d9e8, "__SCT__tp_func_xdp_exception" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa4b78250, "__tracepoint_xdp_exception" },
};

MODULE_INFO(depends, "i2c-core,dca,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBF084BD699C7051A624BDC");
