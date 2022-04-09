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
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x423d2e97, "devm_request_any_context_irq" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,ltc3651-charger");
MODULE_ALIAS("of:N*T*Clltc,ltc3651-chargerC*");
MODULE_ALIAS("of:N*T*Clltc,lt3651-charger");
MODULE_ALIAS("of:N*T*Clltc,lt3651-chargerC*");

MODULE_INFO(srcversion, "ED14D59507C54D52A4F6B10");
