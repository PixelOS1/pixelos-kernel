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
	{ 0xb4652521, "ipv6_chk_addr" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0x9cb7f51a, "nft_fib_validate" },
	{ 0x842a2c27, "nft_fib_store_result" },
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb16c2b17, "ip6_route_lookup" },
	{ 0xa045655a, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc865758, "__nf_ip6_route" },
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0xb756a734, "nft_fib_dump" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "2EF643454485DA91DE8766A");
