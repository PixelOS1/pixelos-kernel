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
	{ 0x8691ccbd, "ip_tunnel_get_link_net" },
	{ 0x521d6d48, "ip_tunnel_dellink" },
	{ 0x2fc0a69, "ip_tunnel_get_iflink" },
	{ 0x95249623, "dev_get_tstats64" },
	{ 0xfcf7b6db, "ip_tunnel_change_mtu" },
	{ 0x6cfac87, "ip_tunnel_siocdevprivate" },
	{ 0xf57d719e, "ip_tunnel_uninit" },
	{ 0x8aa391b1, "rtnl_link_unregister" },
	{ 0xc6506cd4, "unregister_pernet_device" },
	{ 0x4f4dd9b8, "xfrm4_protocol_deregister" },
	{ 0xf9b42fcf, "xfrm4_tunnel_deregister" },
	{ 0xb6c96279, "rtnl_link_register" },
	{ 0x47cf88fe, "xfrm4_tunnel_register" },
	{ 0xc099ac7d, "xfrm4_protocol_register" },
	{ 0x30861b41, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0xffbdb2c0, "ip_tunnel_newlink" },
	{ 0xc80696ae, "__xfrm_policy_check" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0x49fa999d, "ip_tunnel_lookup" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xa1b06480, "ip_output" },
	{ 0x38c3800f, "icmpv6_ndo_send" },
	{ 0x281e2d3e, "icmp_ndo_send" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0xcf3b9695, "ip_route_output_key_hash" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x33a0c36d, "ip6_output" },
	{ 0x85269c10, "skb_scrub_packet" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x28674aa3, "dst_release" },
	{ 0x74eb72a0, "xfrm_lookup_route" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0x67a84a87, "__xfrm_decode_session" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4bcec5c9, "ip_tunnel_init_net" },
	{ 0x2c9a3c59, "ip_tunnel_ctl" },
	{ 0x5590875c, "ip_tunnel_delete_nets" },
	{ 0x16a532fc, "ip_tunnel_init" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0x210da23c, "ip_tunnel_setup" },
	{ 0x2269cb00, "ip_tunnel_header_ops" },
	{ 0x6855739e, "ip_tunnel_changelink" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "73F9E9165E9B813BB1D6EDD");
