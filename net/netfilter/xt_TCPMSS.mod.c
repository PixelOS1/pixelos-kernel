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
	{ 0x768db380, "xt_unregister_targets" },
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0x7f489ecf, "ipv6_skip_exthdr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x24930780, "ipv4_mtu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x28674aa3, "dst_release" },
	{ 0xe7ab1e3b, "ip6_mtu" },
	{ 0x7567cdf1, "nf_route" },
	{ 0xb0e602eb, "memmove" },
	{ 0x24e48d13, "skb_put" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0x74f10948, "inet_proto_csum_replace4" },
	{ 0x183515ef, "skb_ensure_writable" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");
