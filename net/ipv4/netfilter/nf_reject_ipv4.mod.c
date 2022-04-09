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
	{ 0xdfa6106a, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0xecc53204, "nf_ct_attach" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0x865d360, "__icmp_send" },
	{ 0xaa95ae52, "nf_ip_route" },
	{ 0xb6df1c64, "nf_ip_checksum" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x4dbd099f, "ip_route_me_harder" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x24e48d13, "skb_put" },
	{ 0x938aecd6, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BB4572C7B6A7CBA932C0CFE");
