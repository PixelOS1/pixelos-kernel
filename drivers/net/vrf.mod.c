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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xec412cd, "l3mdev_table_lookup_unregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x9d02d6dd, "l3mdev_table_lookup_register" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x7e63ae7, "netdev_lower_get_next" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4f653e77, "netdev_master_upper_dev_get" },
	{ 0x8993281, "inet_select_addr" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xef113c84, "ip6_dst_lookup_flow" },
	{ 0xa24600a, "nf_hook_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0x33372fab, "skb_expand_head" },
	{ 0xc2ad2872, "arp_tbl" },
	{ 0x24d22fd, "netdev_upper_dev_unlink" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb05876f7, "__neigh_create" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe8a32f4e, "nd_tbl" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9e514d25, "dev_queue_xmit_nit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x459f3f88, "skb_push" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x86814848, "ether_setup" },
	{ 0xf805b7f1, "dev_change_flags" },
	{ 0xa964a0ec, "netdev_master_upper_dev_link" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xb2eb19cd, "netdev_err" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x37a0cba, "kfree" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28674aa3, "dst_release" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x77b5d139, "ip6_dst_alloc" },
	{ 0xd7e6bc0b, "fib6_new_table" },
	{ 0x94f774c3, "rt_dst_alloc" },
	{ 0x9595028c, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa1b06480, "ip_output" },
	{ 0x33a0c36d, "ip6_output" },
	{ 0x99aff6eb, "ip6_pol_route" },
	{ 0xa85274b, "fib_nl_delrule" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x7efab436, "fib_nl_newrule" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7831F226EA7C21FB72539A3");
