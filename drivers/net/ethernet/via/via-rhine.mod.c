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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc88cf596, "skb_copy_and_csum_dev" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x754d539c, "strlen" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x8743402b, "mii_link_ok" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xda59b65, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0xf7370f56, "system_state" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x22529725, "mii_check_media" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb19b445, "ioread8" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("of:N*T*Cvia,vt8500-rhine");
MODULE_ALIAS("of:N*T*Cvia,vt8500-rhineC*");
MODULE_ALIAS("pci:v00001106d00003043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003053sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1F7A4EEF4FD33ED9F1D46D9");
