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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd931638b, "__kfree_skb" },
	{ 0xc684a80a, "put_devmap_managed_page" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xee111615, "param_ops_int" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xa5f2b1f7, "vlan_dev_vlan_id" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x677eba74, "pci_disable_msix" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x94bfce58, "__vlan_find_dev_deep_rcu" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x58f8f851, "netdev_master_upper_dev_get_rcu" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0xe13d4cbe, "alloc_pages" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaf8b32c5, "dma_free_attrs" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x5012a70, "pv_ops" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1ea9df4b, "__neigh_event_send" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x3da7657, "dma_sync_single_for_cpu" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xe0fde42, "pci_restore_state" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc23477d, "current_task" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0xb4df3926, "netif_receive_skb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x2170e6d, "napi_enable" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x248d35c7, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5458fdb, "pci_write_vpd" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4f5cb9ae, "arp_send" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x77a86b77, "_dev_alert" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x21075824, "__free_pages" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x8b31c042, "pci_write_vpd_any" },
	{ 0x9ee5e79e, "pci_enable_msix_range" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0x3e17f466, "mdio_set_flag" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x2adfe456, "dma_sync_single_for_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x1564421, "request_firmware" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xee586da4, "napi_get_frags" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0x77bc13a0, "strim" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x38333ca9, "pci_read_vpd" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x54101891, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc60c7e0c, "__put_page" },
	{ 0x522543a2, "napi_gro_frags" },
	{ 0x358bd703, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe9a18439, "pci_save_state" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mdio");

MODULE_ALIAS("pci:v00001425d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000037sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4AF4AE0116BC55528276492");
