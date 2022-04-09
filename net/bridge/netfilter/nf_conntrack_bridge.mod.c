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
	{ 0xc3c58bcf, "nf_ct_bridge_unregister" },
	{ 0xaca62085, "nf_ct_bridge_register" },
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3552a25f, "ip_defrag" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbdbf8cbd, "nf_conntrack_in" },
	{ 0x13db2fbf, "nf_ct_frag6_gather" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xc4f1f918, "kfree_skb_list" },
	{ 0xc41fc042, "ip_fraglist_prepare" },
	{ 0xa87d65f1, "ip_fraglist_init" },
	{ 0x3ebb99e8, "skb_checksum_help" },
	{ 0x68b4a2c4, "ip_frag_next" },
	{ 0x7f41fdf9, "ip_frag_init" },
	{ 0x520e2206, "br_ip6_fragment" },
	{ 0xe5379788, "__nf_conntrack_confirm" },
	{ 0x21432295, "nf_confirm" },
	{ 0x39285def, "nf_ct_deliver_cached_events" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x86c017c5, "br_dev_queue_push_xmit" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,bridge");


MODULE_INFO(srcversion, "3F77922BAA5567129B9A49E");
