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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0x3f72688d, "b53_switch_register" },
	{ 0x2567de26, "b53_switch_alloc" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa71d2e2c, "ioread16be" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x9dca454d, "dsa_unregister_switch" },
	{ 0x93accc2b, "dsa_switch_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "b53_common,dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm3384-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm3384-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6328-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6328-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6368-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6368-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm63xx-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm63xx-switchC*");

MODULE_INFO(srcversion, "D3953326B8CF320B24136CC");
