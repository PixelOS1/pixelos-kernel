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
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xe54ae7a7, "netdev_walk_all_lower_dev" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc2ad2872, "arp_tbl" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb05876f7, "__neigh_create" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1ea9df4b, "__neigh_event_send" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3458196b, "switchdev_bridge_port_unoffload" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x98a9cc8, "unregister_fib_notifier" },
	{ 0x133536b8, "register_netdev" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x218a83bc, "fib4_rule_default" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbcf807bd, "free_fib_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xb5460b2c, "switchdev_bridge_port_offload" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb3e7c67d, "register_fib_notifier" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0xd0e8863f, "call_switchdev_notifiers" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd5e67c02, "pci_msix_vec_count" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B36d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C1E21B8813E1B52262EDAA3");
