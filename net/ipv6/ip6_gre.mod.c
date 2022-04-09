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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x2e507142, "ip6_tnl_get_link_net" },
	{ 0x7e98d360, "ip6_tnl_get_iflink" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xa2393f6c, "inet6_del_protocol" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0xe921762f, "inet6_add_protocol" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x574bca36, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0x7e6a2e1e, "ip6_tnl_xmit_ctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x53edfa95, "ip6_tnl_xmit" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x7d11271e, "nla_put" },
	{ 0x38beb09a, "ip6_tnl_change_mtu" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x2c25ebac, "ip6_tnl_encap_setup" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x53f4af71, "icmp6_send" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xd2015191, "ip6_tnl_rcv" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3577973, "ip6_update_pmtu" },
	{ 0x57d52514, "ip6_redirect" },
	{ 0xa6fe2fed, "gre_parse_header" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0xaf3ca9b1, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x6e0631f7, "__get_hash_from_flowi6" },
	{ 0x459f3f88, "skb_push" },
	{ 0xda59b65, "free_netdev" },
	{ 0x133536b8, "register_netdev" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x86814848, "ether_setup" },
	{ 0x28674aa3, "dst_release" },
	{ 0x9a24463b, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x4fed176b, "ip6_tnl_get_cap" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa916b694, "strnlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tunnel,gre");


MODULE_INFO(srcversion, "830417524DEBBBFCE823DA3");
