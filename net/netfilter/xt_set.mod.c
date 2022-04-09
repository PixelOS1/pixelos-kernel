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
	{ 0x768db380, "xt_unregister_targets" },
	{ 0xb5ae8690, "xt_unregister_matches" },
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0x3a940c80, "xt_register_matches" },
	{ 0xeef61659, "ip_set_test" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7aa2339, "ip_set_del" },
	{ 0x61393bd3, "ip_set_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa7c232a5, "ip_set_nfnl_get_byindex" },
	{ 0xfe996e2d, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");