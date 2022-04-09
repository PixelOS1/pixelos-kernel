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
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xee111615, "param_ops_int" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x232b032c, "device_wakeup_disable" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xfb578fc5, "memset" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xc88cf596, "skb_copy_and_csum_dev" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xfa227d2f, "device_wakeup_enable" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x85bd1608, "__request_region" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xda59b65, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcf2a6966, "up" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x754d539c, "strlen" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0x8743402b, "mii_link_ok" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000016C6d00008841sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C6d00008842sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "56F966AC6C08B448CBB1261");
