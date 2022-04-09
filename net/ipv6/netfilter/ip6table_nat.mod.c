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
	{ 0xb4dbcf78, "ip6t_do_table" },
	{ 0x160b6a84, "unregister_pernet_subsys" },
	{ 0x327052a3, "xt_unregister_template" },
	{ 0xe0dd1d11, "register_pernet_subsys" },
	{ 0x784f325b, "xt_register_template" },
	{ 0x705c3e53, "nf_nat_ipv6_register_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd801a08a, "xt_find_table" },
	{ 0x35d8b926, "ip6t_register_table" },
	{ 0x5b62cc7a, "ip6t_alloc_initial_table" },
	{ 0x37a0cba, "kfree" },
	{ 0xb559a601, "nf_nat_ipv6_unregister_fn" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2a0070e1, "ip6t_unregister_table_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip6_tables,nf_nat");


MODULE_INFO(srcversion, "CB3A6F4FFFB8C8633CFDEC9");
