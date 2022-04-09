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
	{ 0x289ae51e, "tcf_em_unregister" },
	{ 0xb68e8849, "tcf_em_register" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x978fba7d, "dev_get_by_index_rcu" },
	{ 0x938aecd6, "skb_copy_bits" },
	{ 0x459f3f88, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeef61659, "ip_set_test" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa7c232a5, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe996e2d, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
