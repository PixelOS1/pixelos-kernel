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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x6d1b375f, "phy_do_ioctl_running" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x776811b4, "napi_consume_skb" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x9ecfbcb1, "phy_resume" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd4dfd890, "__devm_mdiobus_register" },
	{ 0x3e567c2c, "pcie_set_readrq" },
	{ 0xa45472d6, "phy_init_hw" },
	{ 0x6a18377, "phy_read_mmd" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0x5c86bb44, "mdiobus_get_phy" },
	{ 0xa5ed863a, "phy_write_paged" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x13240c2b, "phy_select_page" },
	{ 0xf881344d, "mdiobus_write" },
	{ 0x3bbf56e9, "phy_get_pause" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xc7dbf4ca, "phy_support_asym_pause" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x826d3243, "pcie_capability_clear_and_set_word" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x6d389c68, "devm_mdiobus_alloc_size" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xb13e7fcf, "phy_ethtool_get_eee" },
	{ 0x2eae6516, "phy_set_asym_pause" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x2cc3125d, "phy_start_aneg" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4166aaa4, "__alloc_pages" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x626b0a05, "phy_mac_interrupt" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x7220fc0a, "phy_modify" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xdb138d2e, "eth_platform_get_mac_address" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x133536b8, "register_netdev" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xb3804c0c, "phy_speed_down" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfc4d8f04, "phy_modify_paged" },
	{ 0x1a7401c8, "netdev_printk" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x83e26230, "phy_suspend" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x6d849403, "__phy_modify" },
	{ 0x3c9e9462, "pci_clear_master" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x1d97d600, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x1d0d3a05, "pci_select_bars" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x21075824, "__free_pages" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x8b64a28c, "phy_connect_direct" },
	{ 0x4bfd9081, "phy_speed_up" },
	{ 0xcdd0eff2, "pci_status_get_and_clear_errors" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x23bef2ee, "pm_schedule_suspend" },
	{ 0xc9bfebb, "__devm_alloc_percpu" },
	{ 0xf1546621, "__mdiobus_write" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xfec4b87c, "genphy_soft_reset" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x21ce3ed1, "dev_fetch_sw_netstats" },
	{ 0x73c5ed0a, "phy_restore_page" },
	{ 0x8cf2592f, "phy_read_paged" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb006ade4, "phy_write_mmd" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x7576c7e6, "pci_dev_run_wake" },
	{ 0x6332ed4b, "phy_ethtool_set_eee" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf7370f56, "system_state" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xd64bbf87, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0xfb35e2e9, "pcim_set_mwi" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libphy,mdio_devres");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B6646A5E8E26A2E24415A39");
