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
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xe8edfbf3, "genl_unregister_family" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xfefa012f, "genl_register_family" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7d1b2c3a, "netlink_unicast" },
	{ 0x928aab17, "__put_net" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x7c8caed0, "get_net_ns_by_fd" },
	{ 0xabd58d1c, "udp_tunnel_xmit_skb" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0x28674aa3, "dst_release" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x459f3f88, "skb_push" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x6e33c5e0, "netlink_broadcast" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf0785fc6, "fput" },
	{ 0x68523297, "sockfd_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x87f244b9, "sk_free" },
	{ 0xd93a9c2c, "release_sock" },
	{ 0x2851846b, "lock_sock_nested" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xf83f73a1, "nla_put_64bit" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xfc10662e, "genlmsg_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udp_tunnel");


MODULE_INFO(srcversion, "CBAEC6675F400055F2F47B0");
