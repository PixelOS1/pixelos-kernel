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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2e372a98, "nf_nat_pptp_hook_expectfn" },
	{ 0xbb5fb72, "nf_nat_pptp_hook_exp_gre" },
	{ 0x36b1a70, "nf_nat_pptp_hook_inbound" },
	{ 0x14180065, "nf_nat_pptp_hook_outbound" },
	{ 0xf2a36612, "pptp_msg_name" },
	{ 0xd1472f71, "__nf_nat_mangle_tcp_packet" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc47a2d0b, "nf_nat_setup_info" },
	{ 0x863b730a, "nf_ct_expect_put" },
	{ 0x64141d04, "nf_ct_unexpect_related" },
	{ 0x1b6f3cc7, "nf_ct_expect_find_get" },
	{ 0x7991d677, "nf_ct_nat_ext_add" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "6EB6E30103FB1287F9CB07B");
