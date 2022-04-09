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
	{ 0x5d19c734, "hts221_pm_ops" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xaebe17a9, "hts221_probe" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hts221,regmap-spi");

MODULE_ALIAS("spi:hts221");
MODULE_ALIAS("of:N*T*Cst,hts221");
MODULE_ALIAS("of:N*T*Cst,hts221C*");

MODULE_INFO(srcversion, "009170993065AF4A335D897");
