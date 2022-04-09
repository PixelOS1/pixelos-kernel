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
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0x67a0bf3b, "neigh_xmit" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0x2ca0e9e, "nf_fwd_netdev_egress" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xdbfc5847, "nft_dump_register" },
	{ 0xae47eb8d, "nft_chain_validate_hooks" },
	{ 0xb07fa084, "nft_fwd_dup_netdev_offload" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_dup_netdev");


MODULE_INFO(srcversion, "E62B8BD5180472477CD351B");
