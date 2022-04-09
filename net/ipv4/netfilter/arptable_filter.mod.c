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
	{ 0xf99348a4, "arpt_do_table" },
	{ 0x784f325b, "xt_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c951139, "arpt_register_table" },
	{ 0x52037769, "arpt_alloc_initial_table" },
	{ 0x74c9960f, "arpt_unregister_table_pre_exit" },
	{ 0xa0fea03, "arpt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arp_tables");


MODULE_INFO(srcversion, "025E77FBC92D373C2D13841");
