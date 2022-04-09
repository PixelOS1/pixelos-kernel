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
	{ 0x521d6d48, "ip_tunnel_dellink" },
	{ 0x2fc0a69, "ip_tunnel_get_iflink" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xfcf7b6db, "ip_tunnel_change_mtu" },
	{ 0x6cfac87, "ip_tunnel_siocdevprivate" },
	{ 0xf57d719e, "ip_tunnel_uninit" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0xf9b42fcf, "xfrm4_tunnel_deregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x47cf88fe, "xfrm4_tunnel_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xffbdb2c0, "ip_tunnel_newlink" },
	{ 0x2e2e99db, "ip_tunnel_rcv" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0x17dfb98d, "__iptunnel_pull_header" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x2c9a3c59, "ip_tunnel_ctl" },
	{ 0x4bcec5c9, "ip_tunnel_init_net" },
	{ 0x5590875c, "ip_tunnel_delete_nets" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49fa999d, "ip_tunnel_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x16a532fc, "ip_tunnel_init" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xa7a96b6b, "ip_tunnel_xmit" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x9ad0c737, "ip_md_tunnel_xmit" },
	{ 0xc114243d, "iptunnel_handle_offloads" },
	{ 0x210da23c, "ip_tunnel_setup" },
	{ 0x2269cb00, "ip_tunnel_header_ops" },
	{ 0x6855739e, "ip_tunnel_changelink" },
	{ 0x72dec139, "ip_tunnel_encap_setup" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "B1ECB84C87511BA1779862A");
