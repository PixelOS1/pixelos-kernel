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
	{ 0xc97322ad, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xb6f0dba, "dev_forward_skb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x14d481bb, "dev_mc_unsync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe6dedd78, "dev_uc_add" },
	{ 0xdd4ccfbb, "__dev_forward_skb" },
	{ 0x623a4de7, "dev_mc_add_excl" },
	{ 0xcf6f7e4c, "netdev_rx_handler_register" },
	{ 0x5fa4ba56, "dev_uc_add_excl" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x226dedf6, "dev_set_allmulti" },
	{ 0x146118c3, "vlan_vid_del" },
	{ 0x2b6af903, "call_netdevice_notifiers" },
	{ 0x31646171, "linkwatch_fire_event" },
	{ 0xa3e92283, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x1d4476f2, "__netpoll_setup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe1c1701c, "netif_rx_ni" },
	{ 0xb57a1a46, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fb83e93, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x77d10cac, "__ethtool_get_link_ksettings" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfcda5886, "dev_mc_del" },
	{ 0x7d11271e, "nla_put" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0xaedf0ab6, "ndo_dflt_fdb_dump" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2d7dfc73, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa916b694, "strnlen" },
	{ 0xb45858fd, "eth_header_cache_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa25fce3f, "netdev_rx_handler_unregister" },
	{ 0xde1b47f3, "eth_header_parse" },
	{ 0x6d5ae3e7, "passthru_features_check" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xaaeda4d8, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0x61b84239, "dev_uc_unsync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x3355c055, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e196c26, "eth_header_cache" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x652cb397, "netpoll_send_skb" },
	{ 0xfaba4644, "dev_uc_del" },
	{ 0x89ffe9c9, "dev_uc_sync" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xe3e1977e, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0xe28f11ac, "dev_queue_xmit_accel" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xd75d8422, "netdev_is_rx_handler_busy" },
	{ 0x5f54348c, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x286a8573, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "26FFA3F6F826851E4C7EC4C");
