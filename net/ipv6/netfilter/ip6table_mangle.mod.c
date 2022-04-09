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
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x327052a3, "xt_unregister_template" },
	{ 0xe70e5d63, "xt_hook_ops_alloc" },
	{ 0x784f325b, "xt_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x35d8b926, "ip6t_register_table" },
	{ 0x5b62cc7a, "ip6t_alloc_initial_table" },
	{ 0xdcd5ed55, "ip6_route_me_harder" },
	{ 0xb4dbcf78, "ip6t_do_table" },
	{ 0xbc9dc094, "ip6t_unregister_table_pre_exit" },
	{ 0x2a0070e1, "ip6t_unregister_table_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tables");


MODULE_INFO(srcversion, "4A79DCF6A622901A961CA83");
