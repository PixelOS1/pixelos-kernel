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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3348db58, "xfrm6_tunnel_deregister" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x28674aa3, "dst_release" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x394d699b, "dst_cache_set_ip6" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6b97c538, "skb_set_owner_w" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x865d360, "__icmp_send" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x57d52514, "ip6_redirect" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x7d11271e, "nla_put" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0x1f5d65b, "dst_cache_get" },
	{ 0x459f3f88, "skb_push" },
	{ 0x70b5254c, "gro_cells_receive" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x478c66d5, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0xe84cb876, "ip_route_input_noref" },
	{ 0x28d76d15, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xa916b694, "strnlen" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x6e0631f7, "__get_hash_from_flowi6" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xb3577973, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x574bca36, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x9a24463b, "rt6_lookup" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2269cb00, "ip_tunnel_header_ops" },
	{ 0xd592c1e5, "ip6tun_encaps" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x49269236, "ip6_local_out" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xa6bbff67, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x1e1d9e44, "xfrm6_tunnel_register" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf5073623, "xfrm_lookup" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xff6813c2, "ipv6_push_frag_opts" },
	{ 0x53f4af71, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "799C8D743DA951B77E6E3A7");
