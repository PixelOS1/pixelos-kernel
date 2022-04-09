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
	{ 0xb19b445, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xec9acbfb, "register_sja1000dev" },
	{ 0xd2d5114f, "alloc_sja1000dev" },
	{ 0xc501dfb9, "platform_get_irq" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x61628d30, "free_sja1000dev" },
	{ 0x5b00552a, "unregister_sja1000dev" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("of:N*T*Cnxp,sja1000");
MODULE_ALIAS("of:N*T*Cnxp,sja1000C*");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000C*");

MODULE_INFO(srcversion, "2242B0E1F1F3E652DD4A956");
