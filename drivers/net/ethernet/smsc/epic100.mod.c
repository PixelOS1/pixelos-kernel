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
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x24e48d13, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0x754d539c, "strlen" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x8743402b, "mii_link_ok" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xb19b445, "ioread8" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010B8d00000005sv00001092sd00000AB4bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000006sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "DAAA42C67F6C2F5E0DB1B65");
