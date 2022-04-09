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
	{ 0x3f48bb55, "pskb_trim_rcsum_slow" },
	{ 0x28674aa3, "dst_release" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x609c64d, "security_skb_classify_flow" },
	{ 0xecc53204, "nf_ct_attach" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x6a41f109, "l3mdev_master_ifindex_rcu" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x7ec60e66, "ip6_route_output_flags" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdc865758, "__nf_ip6_route" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x49269236, "ip6_local_out" },
	{ 0xa6bbff67, "ip6_dst_hoplimit" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xf5073623, "xfrm_lookup" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xa67220cb, "nf_ip6_checksum" },
	{ 0x53f4af71, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "40FBEC92BD9EFBD535AB6CB");
