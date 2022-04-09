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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x459f3f88, "skb_push" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0x24e48d13, "skb_put" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x133536b8, "register_netdev" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x585ae9c9, "__dev_kfree_skb_irq" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x5012a70, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xda59b65, "free_netdev" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x754d539c, "strlen" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017D5d00005731sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005832sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FE0D48F20D48427D407EA93");
