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
	{ 0xf0f4c028, "nf_nat_ipv4_unregister_fn" },
	{ 0x4d679695, "nf_nat_ipv4_register_fn" },
	{ 0xb559a601, "nf_nat_ipv6_unregister_fn" },
	{ 0x705c3e53, "nf_nat_ipv6_register_fn" },
	{ 0x2cf5a9f, "nft_unregister_chain_type" },
	{ 0x715a3843, "nft_register_chain_type" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6c69771b, "nft_do_chain" },
	{ 0xfd8bfe38, "ipv6_find_hdr" },
	{ 0x45b284b5, "nf_nat_inet_register_fn" },
	{ 0x96c99d17, "nf_nat_inet_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "355DF73E2976056E9EE21A7");
