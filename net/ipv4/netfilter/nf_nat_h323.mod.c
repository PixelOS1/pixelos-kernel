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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x362d04cb, "nf_ct_helper_expectfn_unregister" },
	{ 0x5ebc89e3, "nf_ct_helper_expectfn_register" },
	{ 0x906cda2, "nat_q931_hook" },
	{ 0x8ba08c25, "nat_callforwarding_hook" },
	{ 0x58d02ef5, "nat_h245_hook" },
	{ 0x3c5c9f79, "nat_t120_hook" },
	{ 0x8be2b472, "nat_rtp_rtcp_hook" },
	{ 0x5b1443f5, "set_ras_addr_hook" },
	{ 0xc6e69c43, "set_sig_addr_hook" },
	{ 0x1c6e9c98, "set_h225_addr_hook" },
	{ 0x1b0329be, "set_h245_addr_hook" },
	{ 0x64141d04, "nf_ct_unexpect_related" },
	{ 0xa30ebc34, "get_h225_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xd1472f71, "__nf_nat_mangle_tcp_packet" },
	{ 0x9e199fa, "nf_nat_mangle_udp_packet" },
	{ 0xc183e752, "nf_nat_follow_master" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc47a2d0b, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
