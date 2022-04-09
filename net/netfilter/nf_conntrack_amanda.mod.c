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
	{ 0x13e8ed47, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe0745ac2, "nf_ct_expect_init" },
	{ 0x2f626dd6, "textsearch_prepare" },
	{ 0x999681f8, "nf_conntrack_helpers_register" },
	{ 0xd956832, "skb_find_text" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x863b730a, "nf_ct_expect_put" },
	{ 0x6221585b, "nf_ct_expect_alloc" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0x944429a, "nf_conntrack_helpers_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x236b6d1, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6a7ac8a9, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x938aecd6, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "460C2EB96D19FD5418A5333");
