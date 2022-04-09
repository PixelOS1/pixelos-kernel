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
	{ 0xfc5bacdf, "lwtunnel_encap_del_ops" },
	{ 0x3e456cee, "lwtunnel_encap_add_ops" },
	{ 0x7d11271e, "nla_put" },
	{ 0x59219d74, "nla_put_labels" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9df1f98, "lwtunnel_state_alloc" },
	{ 0x7670b536, "nla_get_labels" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xea17ce47, "__skb_warn_lro_forwarding" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x67a0bf3b, "neigh_xmit" },
	{ 0x13dd435f, "mpls_stats_inc_outucastpkts" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x6df47b1e, "mpls_pkt_too_big" },
	{ 0xdc4e8ccb, "mpls_dev_mtu" },
	{ 0x91fed02c, "mpls_output_possible" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mpls_router");


MODULE_INFO(srcversion, "94031D6E2FCD40ABAA72A69");
