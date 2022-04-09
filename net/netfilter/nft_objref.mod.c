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
	{ 0xdbfc5847, "nft_dump_register" },
	{ 0x77621d9f, "nft_set_catchall_lookup" },
	{ 0xcc60c8ec, "nft_set_do_lookup" },
	{ 0xa25c068d, "nf_tables_bind_set" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xbfad4306, "nft_set_lookup_global" },
	{ 0xc6ace260, "nf_tables_deactivate_set" },
	{ 0x84c54f0c, "nf_tables_destroy_set" },
	{ 0xeee46a28, "nft_obj_lookup" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7d11271e, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "73A522DABE88DFDFED054AE");
