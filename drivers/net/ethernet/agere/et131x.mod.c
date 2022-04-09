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
	{ 0xe8bbaf9d, "phy_ethtool_set_link_ksettings" },
	{ 0x88f15d51, "phy_ethtool_get_link_ksettings" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x807e060e, "phy_do_ioctl" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0x133536b8, "register_netdev" },
	{ 0xfd1c647, "phy_attached_info" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0x3d07ff5f, "phy_connect" },
	{ 0x701a3149, "phy_find_first" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x3e567c2c, "pcie_set_readrq" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0xa4394e71, "phy_stop" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x754d539c, "strlen" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("pci:v000011C1d0000ED00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011C1d0000ED01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29557A5A6C1893C011CD0A0");
