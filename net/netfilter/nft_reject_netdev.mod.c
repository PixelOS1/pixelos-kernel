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
	{ 0x6081751d, "nft_reject_policy" },
	{ 0x46fec6a1, "nft_reject_dump" },
	{ 0xd612746d, "nft_reject_init" },
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0x991d35d2, "nf_reject_skb_v4_tcp_reset" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x47d46a89, "nf_reject_skb_v6_tcp_reset" },
	{ 0xe9ac4221, "nf_reject_skb_v4_unreach" },
	{ 0x89be85e4, "dev_queue_xmit" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x56deb821, "nf_reject_skb_v6_unreach" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6");


MODULE_INFO(srcversion, "95BD744C48BE7FCA97EA33E");
