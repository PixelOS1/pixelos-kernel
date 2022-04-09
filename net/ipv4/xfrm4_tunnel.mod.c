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
	{ 0xf9b42fcf, "xfrm4_tunnel_deregister" },
	{ 0xc4af98e0, "xfrm_unregister_type" },
	{ 0x47cf88fe, "xfrm4_tunnel_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9d889de, "xfrm_register_type" },
	{ 0x459f3f88, "skb_push" },
	{ 0xa6117b7f, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "9A836293B14E64C3516A7D8");
