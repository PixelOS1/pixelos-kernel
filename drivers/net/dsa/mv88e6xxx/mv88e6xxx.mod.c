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
	{ 0x590066d0, "dsa_devlink_params_unregister" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0xc0aabb45, "ptp_schedule_worker" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2c7ab036, "dsa_devlink_resource_occ_get_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0xd23de6c5, "kthread_queue_delayed_work" },
	{ 0x6e3347ec, "devlink_priv" },
	{ 0xddc07c2b, "irq_domain_create_simple" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x83af720c, "irq_create_mapping_affinity" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x78afa05, "dsa_devlink_region_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3546ab7b, "kthread_destroy_worker" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfd03a232, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4836c822, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x854dcea, "__irq_resolve_mapping" },
	{ 0x6055bf95, "dsa_switch_find" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcabd7490, "mdio_driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd6611206, "skb_complete_tx_timestamp" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf0d40089, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf207720d, "mdiobus_write_nested" },
	{ 0xe8c9ade8, "dsa_port_phylink_mac_change" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x90688bcd, "devlink_info_driver_name_put" },
	{ 0x162c311c, "ptp_classify_raw" },
	{ 0x9e70dd86, "mdio_driver_register" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd077e855, "dsa_devlink_param_get" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x79287474, "dsa_devlink_resources_unregister" },
	{ 0x1730f2e8, "irq_set_chip_and_handler_name" },
	{ 0xc23e8d5f, "dsa_devlink_region_destroy" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4402a5b1, "dsa_devlink_params_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfd3e2b67, "dsa_devlink_param_set" },
	{ 0x131e8b94, "phylink_helper_basex_speed" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd906d82c, "ptp_parse_header" },
	{ 0x5f0cf6d6, "ptp_find_pin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xc6039ac, "dsa_flush_workqueue" },
	{ 0xac656f89, "dsa_devlink_port_region_create" },
	{ 0x611ba7be, "dsa_devlink_resource_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xfdebfa59, "dsa_register_switch" },
	{ 0x6e4b27d0, "ptp_clock_index" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xfbafd50b, "irq_domain_remove" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x607c4683, "devlink_info_version_fixed_put" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x789bba14, "skb_clone_sk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0xd66c79e5, "mdiobus_read_nested" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd1ee2d4c, "br_port_flag_is_set" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa8386eb0, "kthread_cancel_delayed_work_sync" },
	{ 0x20978fb9, "idr_find" },
	{ 0x2a0e2407, "handle_level_irq" },
	{ 0xe2d2e418, "kthread_create_worker" },
	{ 0x18e187e4, "irq_domain_xlate_twocell" },
	{ 0xfa62d023, "br_vlan_enabled" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "dsa_core,libphy,phylink,bridge");

MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085C*");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6190");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6190C*");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6250");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6250C*");

MODULE_INFO(srcversion, "4C1333E9FBE016470C0E421");
