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
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1ef12e52, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe17b96cc, "mdiobus_alloc_size" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xed31cc64, "mdiobus_read" },
	{ 0x31900c0b, "mdiobus_free" },
	{ 0xc38e7269, "mdiobus_unregister" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdioC*");

MODULE_INFO(srcversion, "07AE43255223C35148619BF");
