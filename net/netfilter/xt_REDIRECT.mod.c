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
	{ 0x6bb5996e, "xt_register_targets" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x918ea836, "nf_nat_redirect_ipv6" },
	{ 0xe78b431, "nf_ct_netns_put" },
	{ 0x559e5866, "nf_nat_redirect_ipv4" },
	{ 0x858f43ff, "nf_ct_netns_get" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "B6B069F4F0E1CE07496143C");
