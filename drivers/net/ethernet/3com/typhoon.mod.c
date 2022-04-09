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
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xda59b65, "free_netdev" },
	{ 0x68d03a6, "pci_clear_mwi" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x1564421, "request_firmware" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x9c65b78a, "csum_partial_copy_nocheck" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B7d00009900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009904sv*sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00001102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002101bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009905sv*sd00002102bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009908sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009909sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000990Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FC86D2B2C5E6D01FA3C5EAC");
