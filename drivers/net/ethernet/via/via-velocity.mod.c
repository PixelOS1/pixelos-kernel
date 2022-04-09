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
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xee111615, "param_ops_int" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xc6468b1b, "pci_enable_wake" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x591c0306, "_dev_notice" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0x6f7284d4, "pci_set_power_state" },
	{ 0x754d539c, "strlen" },
	{ 0xf3c35a84, "netdev_notice" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110");
MODULE_ALIAS("of:N*T*Cvia,velocity-vt6110C*");
MODULE_ALIAS("pci:v00001106d00003119sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B15C63350B4759301E519D6");
