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
	{ 0x8691ccbd, "ip_tunnel_get_link_net" },
	{ 0x2fc0a69, "ip_tunnel_get_iflink" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x47cf88fe, "xfrm4_tunnel_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xf9b42fcf, "xfrm4_tunnel_deregister" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x133536b8, "register_netdev" },
	{ 0xf88cf3ce, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x72dec139, "ip_tunnel_encap_setup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6cfac87, "ip_tunnel_siocdevprivate" },
	{ 0x9487d3e1, "ns_capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xda59b65, "free_netdev" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x8ef0abf1, "neigh_destroy" },
	{ 0x4c8ad6b4, "dst_cache_set_ip4" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe3af0432, "iptunnel_xmit" },
	{ 0x19aa5f2d, "iptun_encaps" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x6b97c538, "skb_set_owner_w" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x5e0abf6c, "dst_cache_get_ip4" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xa7a96b6b, "ip_tunnel_xmit" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f0ed6e8, "ipv6_chk_prefix" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xb24f9613, "netif_rx" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5f4cf3fd, "ipv6_chk_custom_prefix" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa916b694, "strnlen" },
	{ 0xcac320d3, "__dev_get_by_index" },
	{ 0x28674aa3, "dst_release" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x2e2e99db, "ip_tunnel_rcv" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x97098f94, "ip6_err_gen_icmpv6_unreach" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x574bca36, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0x2269cb00, "ip_tunnel_header_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "444D405D2E8D0762697B065");
