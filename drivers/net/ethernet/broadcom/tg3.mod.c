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
	{ 0xee111615, "param_ops_int" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x920e2463, "build_skb" },
	{ 0x92d3e4a4, "phy_ethtool_ksettings_set" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7265f2b0, "pci_vpd_check_csum" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x1564421, "request_firmware" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x2eae6516, "phy_set_asym_pause" },
	{ 0xcb2821ff, "phy_validate_pause" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0xcc2400bd, "phy_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x133536b8, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xdb138d2e, "eth_platform_get_mac_address" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0xef731740, "pci_find_capability" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0xc7dbf4ca, "phy_support_asym_pause" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xdc43bdc6, "pci_vpd_find_ro_info_keyword" },
	{ 0x3b44d9c7, "pci_vpd_alloc" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xc23477d, "current_task" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x826d3243, "pcie_capability_clear_and_set_word" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x6216cbf0, "pci_device_is_present" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x94c6ef8, "phy_mii_ioctl" },
	{ 0x2cc3125d, "phy_start_aneg" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x7a875fb5, "__skb_gso_segment" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x307eaf37, "skb_copy" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x99f9638f, "__napi_alloc_frag_align" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x536d56bd, "hwmon_device_register_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x40a78094, "phy_ethtool_ksettings_get" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x754d539c, "strlen" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf7370f56, "system_state" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x5c86bb44, "mdiobus_get_phy" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5DE28C74484358C04B85650");
