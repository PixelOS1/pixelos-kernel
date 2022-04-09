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
	{ 0x581b25e2, "libipw_xmit" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x8f03d0aa, "libipw_rx_mgt" },
	{ 0xb0e602eb, "memmove" },
	{ 0x24560eca, "libipw_rx" },
	{ 0x24e48d13, "skb_put" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x133536b8, "register_netdev" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb01c9db2, "libipw_get_geo" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd5c44315, "alloc_libipw" },
	{ 0x607013d5, "pci_iomap" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x1564421, "request_firmware" },
	{ 0x1645bc82, "libipw_networks_age" },
	{ 0x1322aea9, "libipw_set_geo" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xd786c61a, "free_libipw" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x37169f79, "cpu_latency_qos_update_request" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19b445, "ioread8" },
	{ 0x842c8e9d, "ioread16" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x740ed4cb, "libipw_wx_get_scan" },
	{ 0xc27b3f01, "libipw_wx_set_encode" },
	{ 0x6c8b8741, "libipw_wx_get_encode" },
	{ 0xfcb637b, "libipw_wx_set_encodeext" },
	{ 0xeef038b9, "libipw_wx_get_encodeext" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2891d7a7, "wireless_send_event" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x877156ac, "libipw_txb_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libipw,cfg80211");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002520bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002521bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002524bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002525bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002526bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002522bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002523bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002527bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002528bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002529bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Bbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Cbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd0000252Dbc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002550bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002551bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002553bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002554bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002555bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002560bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002562bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002563bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002561bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002565bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002566bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002567bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002570bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002580bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002582bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002583bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002581bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002585bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002586bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002587bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002590bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002592bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002591bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002593bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002596bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002598bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd000025A0bc*sc*i*");

MODULE_INFO(srcversion, "1B8227FF0F3B5CCA4CFCD90");
