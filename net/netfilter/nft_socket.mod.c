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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdbfc5847, "nft_dump_register" },
	{ 0x7d11271e, "nla_put" },
	{ 0xaa8d680c, "nf_sk_lookup_slow_v4" },
	{ 0xd2ee7396, "sock_gen_put" },
	{ 0x2deac965, "nf_sk_lookup_slow_v6" },
	{ 0x5320de4f, "nft_parse_register_store" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_socket_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "3EAFAB1E0DD17189B978650");
