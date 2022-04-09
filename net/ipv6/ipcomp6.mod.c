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
	{ 0xf4a79a82, "xfrm6_rcv" },
	{ 0xb34fc200, "xfrm6_protocol_deregister" },
	{ 0xc4af98e0, "xfrm_unregister_type" },
	{ 0x9ccadbf0, "xfrm6_protocol_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9d889de, "xfrm_register_type" },
	{ 0x57d52514, "ip6_redirect" },
	{ 0xb3577973, "ip6_update_pmtu" },
	{ 0xd485a00a, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfb86ebc2, "__xfrm_state_destroy" },
	{ 0xdd9b5a3b, "xfrm_state_insert" },
	{ 0x3ceaa1ee, "xfrm_init_state" },
	{ 0xfe87c7af, "xfrm6_tunnel_alloc_spi" },
	{ 0xa22aaa32, "xfrm_state_alloc" },
	{ 0xdcedb06f, "xfrm_state_lookup" },
	{ 0xf160e0be, "xfrm6_tunnel_spi_lookup" },
	{ 0x8e09a2ff, "ipcomp_init_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "F4618135589C9A890EACC9D");
