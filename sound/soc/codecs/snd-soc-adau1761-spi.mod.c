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
	{ 0x67b06316, "adau1761_regmap_config" },
	{ 0xdaf73586, "adau17x1_remove" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3a1b77c2, "adau1761_probe" },
	{ 0xdf4b802d, "spi_write_then_read" },
	{ 0x9d27181c, "spi_get_device_id" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-adau1761,snd-soc-adau17x1");

MODULE_ALIAS("spi:adau1361");
MODULE_ALIAS("spi:adau1461");
MODULE_ALIAS("spi:adau1761");
MODULE_ALIAS("spi:adau1961");

MODULE_INFO(srcversion, "272181F93A3546689D9B8A8");
