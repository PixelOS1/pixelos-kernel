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
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x133536b8, "register_netdev" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5a921311, "strncmp" },
	{ 0xda59b65, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000100Bd00000020sv000012D9sd0000000Cbc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C273B58572C42B3807A4B73");
