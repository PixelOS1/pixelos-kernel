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
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xdee7257f, "gro_find_receive_by_type" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7004a24, "udp_tunnel_notify_del_rx_port" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x66628bf3, "ip_tunnel_metadata_cnt" },
	{ 0x28674aa3, "dst_release" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xabd58d1c, "udp_tunnel_xmit_skb" },
	{ 0x394d699b, "dst_cache_set_ip6" },
	{ 0x8475b353, "udp_tun_rx_dst" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x5e0abf6c, "dst_cache_get_ip4" },
	{ 0xc3b6dce1, "dst_cache_get_ip6" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe2492581, "metadata_dst_free" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xeb4e0e63, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x4094f035, "udp_sock_create6" },
	{ 0x45ef50b6, "setup_udp_tunnel_sock" },
	{ 0xb24f9613, "netif_rx" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2c309f61, "udp_tunnel_sock_release" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7ffd81fe, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xda4d5636, "udp_tunnel_push_rx_port" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xda59b65, "free_netdev" },
	{ 0x7d11271e, "nla_put" },
	{ 0x70b5254c, "gro_cells_receive" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9225a5ae, "gro_find_complete_by_type" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xd90ad6b3, "ipv6_stub" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x75839b5e, "skb_tunnel_check_pmtu" },
	{ 0x666fb8d9, "rtnl_configure_link" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf8acf2d4, "udp_tunnel_notify_add_rx_port" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x6666bd3f, "udp_tunnel_drop_rx_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86814848, "ether_setup" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xd039795a, "unregister_netdevice_queue" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x18c091fd, "rtnl_create_link" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe0a6df90, "gro_cells_init" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x9a24463b, "rt6_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0xdb48a4a6, "udp_tunnel6_xmit_skb" },
	{ 0x4c8ad6b4, "dst_cache_set_ip4" },
	{ 0xd071739c, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xa6bbff67, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "udp_tunnel,ip6_udp_tunnel");


MODULE_INFO(srcversion, "0984B08BA538B819EBC44C3");
