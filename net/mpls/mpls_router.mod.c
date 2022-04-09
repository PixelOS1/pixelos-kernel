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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x3fe7a141, "dev_get_flags" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x28674aa3, "dst_release" },
	{ 0x6ece8090, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5d95e574, "rtnl_notify" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x66cfb01c, "ip_tunnel_encap_del_ops" },
	{ 0x7c7b3f68, "rtnl_register_module" },
	{ 0xea17ce47, "__skb_warn_lro_forwarding" },
	{ 0xcd279169, "nla_find" },
	{ 0x7d11271e, "nla_put" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x722e0dfd, "dev_get_by_index" },
	{ 0x67d84bd0, "dev_remove_pack" },
	{ 0xa8c36cca, "rtnl_af_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1e93b39e, "nla_reserve_nohdr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x48d51460, "ip_valid_fib_dump_req" },
	{ 0x1b74d1, "nla_reserve_64bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa53d0c0b, "rtnl_unicast" },
	{ 0x3d740c03, "rtnl_set_sk_err" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x7d59ebcd, "rtnl_af_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67a0bf3b, "neigh_xmit" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xcfbb8700, "nla_reserve" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x705e1dc6, "dev_add_pack" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5a1fdf3a, "register_net_sysctl" },
	{ 0x580539e1, "skb_gso_validate_network_len" },
	{ 0x7955f561, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xabcf8d6, "ip_tunnel_encap_add_ops" },
	{ 0x97c8cfdf, "netlink_strict_get_check" },
};

MODULE_INFO(depends, "ip_tunnel");


MODULE_INFO(srcversion, "BEF6CAB6A0B4AD5F3C10A93");
