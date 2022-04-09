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
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xeb28a902, "es8328_probe" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd09e07b3, "es8328_regmap_config" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-es8328");

MODULE_ALIAS("of:N*T*Ceverest,es8328");
MODULE_ALIAS("of:N*T*Ceverest,es8328C*");

MODULE_INFO(srcversion, "37C7A2EB19DAE19EFD21010");
