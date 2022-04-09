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
	{ 0x9aa4263c, "ipcomp_output" },
	{ 0x457ad789, "ipcomp_input" },
	{ 0xd6d3d460, "ipcomp_destroy" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0x55676246, "xfrm4_rcv" },
	{ 0x4f4dd9b8, "xfrm4_protocol_deregister" },
	{ 0xc4af98e0, "xfrm_unregister_type" },
	{ 0xc099ac7d, "xfrm4_protocol_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9d889de, "xfrm_register_type" },
	{ 0xf5337c6e, "ipv4_update_pmtu" },
	{ 0x96d7a6cf, "ipv4_redirect" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdd9b5a3b, "xfrm_state_insert" },
	{ 0x3ceaa1ee, "xfrm_init_state" },
	{ 0xa22aaa32, "xfrm_state_alloc" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0x8e09a2ff, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "FC13258E5F97D2DFDCF1FF1");
