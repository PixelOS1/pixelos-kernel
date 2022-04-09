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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xcaa7242c, "mrp_uninit_applicant" },
	{ 0xf805b7f1, "dev_change_flags" },
	{ 0xaa9cc505, "vlan_filter_push_vids" },
	{ 0x14d481bb, "dev_mc_unsync" },
	{ 0xbb3c0c02, "mrp_request_leave" },
	{ 0x11a5b2d, "vlan_filter_drop_vids" },
	{ 0x754d539c, "strlen" },
	{ 0x3fe7a141, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x350e1083, "proc_create_single_data" },
	{ 0x552afebc, "garp_uninit_applicant" },
	{ 0xa5f2b1f7, "vlan_dev_vlan_id" },
	{ 0xe6dedd78, "dev_uc_add" },
	{ 0xe35d6993, "_proc_mkdir" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xc67970fd, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3db41249, "vlan_uses_dev" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xd349d253, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcaf5fb25, "remove_proc_entry" },
	{ 0x226dedf6, "dev_set_allmulti" },
	{ 0x146118c3, "vlan_vid_del" },
	{ 0x2b6af903, "call_netdevice_notifiers" },
	{ 0x31646171, "linkwatch_fire_event" },
	{ 0xa3e92283, "vlan_vid_add" },
	{ 0x1d4476f2, "__netpoll_setup" },
	{ 0xd98ce781, "garp_init_applicant" },
	{ 0x5012a70, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xbc208b44, "proc_remove" },
	{ 0xb25e32b2, "vlan_ioctl_set" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x77d10cac, "__ethtool_get_link_ksettings" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xda59b65, "free_netdev" },
	{ 0x16841040, "garp_register_application" },
	{ 0x7d11271e, "nla_put" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0x459f3f88, "skb_push" },
	{ 0x2d7dfc73, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbaeed23a, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xde1b47f3, "eth_header_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x9ee0789b, "mrp_init_applicant" },
	{ 0xaaeda4d8, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf51cfa5a, "proc_create_net_data" },
	{ 0x86814848, "ether_setup" },
	{ 0x61b84239, "dev_uc_unsync" },
	{ 0x1e652bf1, "__dev_get_by_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x60f0122a, "garp_unregister_application" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xa5f3c548, "netdev_warn" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x3355c055, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa43afa0, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x652cb397, "netpoll_send_skb" },
	{ 0xfaba4644, "dev_uc_del" },
	{ 0x89ffe9c9, "dev_uc_sync" },
	{ 0xe3e1977e, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x8ce7e22e, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc049d760, "mrp_unregister_application" },
	{ 0x4032ca5d, "mrp_request_join" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x5f54348c, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf0937a14, "dev_get_stats" },
	{ 0x286a8573, "dev_set_mtu" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "DB70C3D781312F77C38A298");
