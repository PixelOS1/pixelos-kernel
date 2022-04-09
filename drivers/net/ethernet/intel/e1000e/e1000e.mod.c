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
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x826d3243, "pcie_capability_clear_and_set_word" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4eeec18a, "pci_disable_link_state_locked" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7299ff3, "pci_enable_pcie_error_reporting" },
	{ 0xadccd966, "convert_art_to_tsc" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x23bef2ee, "pm_schedule_suspend" },
	{ 0x92997ed8, "_printk" },
	{ 0x6d5ae3e7, "passthru_features_check" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x3cf47bb0, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xdcf6bbc2, "dev_trans_start" },
	{ 0xe4c074a1, "get_device_system_crosststamp" },
	{ 0xedc03953, "iounmap" },
	{ 0x60c2f71d, "pci_prepare_to_sleep" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x7576c7e6, "pci_dev_run_wake" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbd3fe1e3, "disable_hardirq" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb3088b32, "pci_enable_device_mem" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xe0aef0a6, "pci_release_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x78ad87ec, "pci_request_selected_regions_exclusive" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xf0937a14, "dev_get_stats" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A1Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000550Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005511sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "72D2B8E282647F98AD880A3");
