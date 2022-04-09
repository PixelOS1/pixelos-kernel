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
	{ 0xc61194c7, "nft_unregister_obj" },
	{ 0xcea92252, "nft_unregister_expr" },
	{ 0x6b87fa26, "nft_register_obj" },
	{ 0xc0cdaba2, "nft_register_expr" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf00b6a13, "metadata_dst_alloc" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x5320de4f, "nft_parse_register_store" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdbfc5847, "nft_dump_register" },
	{ 0x7d11271e, "nla_put" },
	{ 0x28674aa3, "dst_release" },
	{ 0xe2492581, "metadata_dst_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "41485A8327E546F7E6368F0");
