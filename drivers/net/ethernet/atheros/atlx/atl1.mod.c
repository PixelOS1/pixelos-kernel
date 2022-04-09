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
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x133536b8, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x8d69151d, "pci_wake_from_d3" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x754d539c, "strlen" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xfb578fc5, "memset" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001969d00001048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "99EE123F20ED779713715D4");
