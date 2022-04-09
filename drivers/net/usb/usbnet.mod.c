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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x5ca65702, "usb_get_from_anchor" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafcc67cf, "usb_kill_urb" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa81f9c12, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x168f7fed, "usb_get_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3ecee33a, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xa9dd129e, "usb_string" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xb60bbac0, "mii_nway_restart" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc6b0a93e, "usb_set_interface" },
	{ 0xda59b65, "free_netdev" },
	{ 0x21d2cac8, "usb_autopm_put_interface_async" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x133536b8, "register_netdev" },
	{ 0x3f5892ce, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x10783aeb, "mii_ethtool_set_link_ksettings" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xba72614d, "usb_submit_urb" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xf120fcfb, "usb_autopm_get_interface_async" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x91159164, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x4b35e781, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1156afa, "mii_ethtool_get_link_ksettings" },
	{ 0xf4936f92, "usb_autopm_get_interface_no_resume" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8743402b, "mii_link_ok" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0x24e48d13, "skb_put" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xa37dd2ac, "usb_free_urb" },
	{ 0xe9cc535d, "usb_autopm_put_interface" },
	{ 0xdeebbef5, "usb_anchor_urb" },
	{ 0x51ec4d55, "usb_alloc_urb" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mii");


MODULE_INFO(srcversion, "E2DE1A5C8FFF9B3BBA51E8B");
