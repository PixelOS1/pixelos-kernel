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
	{ 0x2e507142, "ip6_tnl_get_link_net" },
	{ 0x7e98d360, "ip6_tnl_get_iflink" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xb34fc200, "xfrm6_protocol_deregister" },
	{ 0x3348db58, "xfrm6_tunnel_deregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x1e1d9e44, "xfrm6_tunnel_register" },
	{ 0x9ccadbf0, "xfrm6_protocol_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0xf160e0be, "xfrm6_tunnel_spi_lookup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x574bca36, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0xf43c0ee1, "ip6_tnl_rcv_ctl" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0x57d52514, "ip6_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb3577973, "ip6_update_pmtu" },
	{ 0xd485a00a, "make_kuid" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x92997ed8, "_printk" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xa1b06480, "ip_output" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcf3b9695, "ip_route_output_key_hash" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x33a0c36d, "ip6_output" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x7e6a2e1e, "ip6_tnl_xmit_ctl" },
	{ 0x74eb72a0, "xfrm_lookup_route" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x67a84a87, "__xfrm_decode_session" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2269cb00, "ip_tunnel_header_ops" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28674aa3, "dst_release" },
	{ 0x9a24463b, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x4fed176b, "ip6_tnl_get_cap" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,tunnel6,xfrm6_tunnel");


MODULE_INFO(srcversion, "777E51A25305F11256CCAA4");
