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
	{ 0x92997ed8, "_printk" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xde80cd09, "ioremap" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x349cba85, "strchr" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa0ead61d, "__napi_alloc_skb" },
	{ 0x7714a710, "__napi_schedule_irqoff" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x22529725, "mii_check_media" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xcfe23d5f, "generic_mii_ioctl" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x754d539c, "strlen" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0xda59b65, "free_netdev" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x68d03a6, "pci_clear_mwi" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000357d0000000Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "22EFB38E1929F7B167965A5");
