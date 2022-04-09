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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1564421, "request_firmware" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0xcdd0eff2, "pci_status_get_and_clear_errors" },
	{ 0x92997ed8, "_printk" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xda59b65, "free_netdev" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd44b38f4, "__skb_pad" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc23477d, "current_task" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xfb578fc5, "memset" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x1a7401c8, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21075824, "__free_pages" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x754d539c, "strlen" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000035sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "898B526592B8A477197FB84");
