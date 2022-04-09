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
	{ 0x64141d04, "nf_ct_unexpect_related" },
	{ 0xee111615, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x13e8ed47, "__nf_ct_refresh_acct" },
	{ 0x28674aa3, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb7fecf0b, "nf_ct_helper_init" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe0745ac2, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaa95ae52, "nf_ip_route" },
	{ 0x999681f8, "nf_conntrack_helpers_register" },
	{ 0xddd727e4, "__pskb_pull_tail" },
	{ 0x11089ac7, "_ctype" },
	{ 0x863b730a, "nf_ct_expect_put" },
	{ 0x6221585b, "nf_ct_expect_alloc" },
	{ 0x5a921311, "strncmp" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0x944429a, "nf_conntrack_helpers_unregister" },
	{ 0xac32634a, "nf_ct_remove_expect" },
	{ 0xdf20f1d0, "__nf_ct_expect_find" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x236b6d1, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdc865758, "__nf_ip6_route" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x938aecd6, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "D7ECA66978D5A0BDE981351");