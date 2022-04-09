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
	{ 0x95249623, "dev_get_tstats64" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0xabd58d1c, "udp_tunnel_xmit_skb" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xdb48a4a6, "udp_tunnel6_xmit_skb" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x75839b5e, "skb_tunnel_check_pmtu" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x2e3dc0b0, "inet_get_local_port_range" },
	{ 0x75890a6, "ip6_dst_lookup_tunnel" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc963f650, "ip_route_output_tunnel" },
	{ 0x286a8573, "dev_set_mtu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc97322ad, "register_netdevice" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x70b5254c, "gro_cells_receive" },
	{ 0x8475b353, "udp_tun_rx_dst" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0x4094f035, "udp_sock_create6" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x7d11271e, "nla_put" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x2c309f61, "udp_tunnel_sock_release" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "35D0A5D7822456F442D6368");
