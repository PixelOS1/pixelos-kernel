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
	{ 0xaffeeac8, "dev_mc_sync_multiple" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x84dcf661, "netdev_info" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0x14d481bb, "dev_mc_unsync" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x75a80ed6, "dev_disable_lro" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcf6f7e4c, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3db41249, "vlan_uses_dev" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x226dedf6, "dev_set_allmulti" },
	{ 0x146118c3, "vlan_vid_del" },
	{ 0x2b6af903, "call_netdevice_notifiers" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa3e92283, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x1d4476f2, "__netpoll_setup" },
	{ 0x618b1483, "vlan_vids_del_by_dev" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xa287b804, "vlan_vids_add_by_dev" },
	{ 0xa964a0ec, "netdev_master_upper_dev_link" },
	{ 0x891e6d8a, "netdev_lower_state_changed" },
	{ 0x33947cdf, "netdev_change_features" },
	{ 0xf7927aa1, "netdev_has_upper_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb57a1a46, "dev_set_mac_address" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0x77d10cac, "__ethtool_get_link_ksettings" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x7d11271e, "nla_put" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0xbf1dd7b, "dev_mc_flush" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5c74cbaa, "dev_open" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd286cea9, "dev_uc_flush" },
	{ 0xdfbcf889, "module_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xa25fce3f, "netdev_rx_handler_unregister" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x6d5ae3e7, "passthru_features_check" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0x61b84239, "dev_uc_unsync" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x3355c055, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x2728b7eb, "dev_uc_sync_multiple" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x652cb397, "netpoll_send_skb" },
	{ 0xe3e1977e, "__netpoll_free" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xf32ea3d5, "try_module_get" },
	{ 0x286a8573, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "228D77174EEE4CC3C52A078");
