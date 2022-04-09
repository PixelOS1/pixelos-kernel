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
	{ 0xab5f86b7, "ebt_do_table" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xc8a0f7b8, "ebt_unregister_template" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x738b3f3e, "ebt_register_template" },
	{ 0xcf7eac56, "ebt_register_table" },
	{ 0x42d2d4ce, "ebt_unregister_table_pre_exit" },
	{ 0x77ba5a91, "ebt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "143D6B92687E481F09FA257");
