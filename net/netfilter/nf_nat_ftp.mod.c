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
	{ 0x548917c2, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x98cc7db8, "nf_nat_ftp_hook" },
	{ 0xc1551e2b, "nf_nat_helper_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x64141d04, "nf_ct_unexpect_related" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x236b6d1, "nf_ct_helper_log" },
	{ 0xd1472f71, "__nf_nat_mangle_tcp_packet" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x97c3271b, "nf_ct_expect_related_report" },
	{ 0xc183e752, "nf_nat_follow_master" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_ftp,nf_nat");


MODULE_INFO(srcversion, "B66814F5D7308F22173AF7B");
