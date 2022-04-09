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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xdcf6bbc2, "dev_trans_start" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001011d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ADd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010D9d00000512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010D9d00000531sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000125Bd00001400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ADd0000C115sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00000981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00000985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00001985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00009511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad00000981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad00002774sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00009881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000039sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00009511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001541sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001626d00008410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d0000AB09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017B3d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001414d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001414d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A4A9B4135BB4CC634E7F9D4");
