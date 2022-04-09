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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x492698f8, "ethtool_op_get_ts_info" },
	{ 0xd0ece629, "phy_disconnect" },
	{ 0xd0bb7cfa, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6d1b375f, "phy_do_ioctl_running" },
	{ 0xa4394e71, "phy_stop" },
	{ 0x72b9627d, "napi_disable" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x7714a710, "__napi_schedule_irqoff" },
	{ 0x9ecfbcb1, "phy_resume" },
	{ 0x92d3e4a4, "phy_ethtool_ksettings_set" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa45472d6, "phy_init_hw" },
	{ 0x40a78094, "phy_ethtool_ksettings_get" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5d34fc48, "phy_ethtool_nway_reset" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb82f5e92, "platform_get_irq_optional" },
	{ 0x2d440df6, "device_get_phy_mode" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa1eb43a, "__genphy_config_aneg" },
	{ 0x3bbf56e9, "phy_get_pause" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb13e7fcf, "phy_ethtool_get_eee" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2cc3125d, "phy_start_aneg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9eb69b23, "phy_print_status" },
	{ 0xd5a83705, "netif_schedule_queue" },
	{ 0x626b0a05, "phy_mac_interrupt" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcc2400bd, "phy_start" },
	{ 0xcb2821ff, "phy_validate_pause" },
	{ 0x701a3149, "phy_find_first" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x2170e6d, "napi_enable" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2f60cf26, "device_get_ethdev_address" },
	{ 0x1da2875e, "netif_set_real_num_rx_queues" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x42a6f0, "netif_set_real_num_tx_queues" },
	{ 0x935525f9, "netif_napi_add" },
	{ 0x687ee53d, "fixed_phy_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc795a63b, "mdio_find_bus" },
	{ 0x88e4bb45, "fixed_phy_set_link_update" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x83e26230, "phy_suspend" },
	{ 0x28b7b84a, "softnet_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf1858ff3, "platform_device_add_resources" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5ffdbb96, "phy_init_eee" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0xe23272fa, "napi_gro_receive" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0x7f52071a, "net_dim" },
	{ 0x8b64a28c, "phy_connect_direct" },
	{ 0x761527a1, "put_device" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2777e4f6, "napi_complete_done" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x69612d7a, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41176a05, "__netif_napi_del" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x6332ed4b, "phy_ethtool_set_eee" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe09786fd, "unregister_netdev" },
	{ 0x1873d76c, "phy_attach" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xa64a5b60, "skb_tstamp_tx" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x373bca32, "phy_set_max_speed" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xe2ff3c5, "alloc_etherdev_mqs" },
	{ 0x118c20ac, "netdev_crit" },
};

MODULE_INFO(depends, "libphy,fixed_phy");

MODULE_ALIAS("acpi*:BCM6E4E:*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-genet-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7712-genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7712-genet-v5C*");

MODULE_INFO(srcversion, "E978AC69F1D5A9670B1B55B");
