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
	{ 0x2c9a3c59, "ip_tunnel_ctl" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x2fc0a69, "ip_tunnel_get_iflink" },
	{ 0x28674aa3, "dst_release" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x49fa999d, "ip_tunnel_lookup" },
	{ 0xd5e17c56, "__ip_tunnel_change_mtu" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x865d360, "__icmp_send" },
	{ 0xa7a96b6b, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xecdc9226, "inetdev_by_index" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0x210da23c, "ip_tunnel_setup" },
	{ 0x521d6d48, "ip_tunnel_dellink" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x5590875c, "ip_tunnel_delete_nets" },
	{ 0x20a93878, "gre_add_protocol" },
	{ 0xffbdb2c0, "ip_tunnel_newlink" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xf57d719e, "ip_tunnel_uninit" },
	{ 0xda59b65, "free_netdev" },
	{ 0x7d11271e, "nla_put" },
	{ 0x58662282, "gre_del_protocol" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x16a532fc, "ip_tunnel_init" },
	{ 0x8691ccbd, "ip_tunnel_get_link_net" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x678735a9, "__skb_get_hash" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0x6758d17b, "__ip_mc_dec_group" },
	{ 0x9ad0c737, "ip_md_tunnel_xmit" },
	{ 0x6855739e, "ip_tunnel_changelink" },
	{ 0x666fb8d9, "rtnl_configure_link" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0x3d49443, "ip_mc_inc_group" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86814848, "ether_setup" },
	{ 0x4bcec5c9, "ip_tunnel_init_net" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0x672c7761, "ip_route_output_flow" },
	{ 0x18c091fd, "rtnl_create_link" },
	{ 0x6cfac87, "ip_tunnel_siocdevprivate" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x97098f94, "ip6_err_gen_icmpv6_unreach" },
	{ 0x4ea591a4, "___pskb_trim" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x72dec139, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xfcf7b6db, "ip_tunnel_change_mtu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6277eaac, "eth_mac_addr" },
	{ 0xa6fe2fed, "gre_parse_header" },
	{ 0x2e2e99db, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre");


MODULE_INFO(srcversion, "33B7F6D6803735CCBE26269");
