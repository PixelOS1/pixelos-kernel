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
	{ 0x754d539c, "strlen" },
	{ 0x19aa5f2d, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x28674aa3, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5e0abf6c, "dst_cache_get_ip4" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xda59b65, "free_netdev" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0xe3af0432, "iptunnel_xmit" },
	{ 0x70b5254c, "gro_cells_receive" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xa916b694, "strnlen" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x574bca36, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4c8ad6b4, "dst_cache_set_ip4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x286a8573, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03E40CE242D026AACEE1212");
