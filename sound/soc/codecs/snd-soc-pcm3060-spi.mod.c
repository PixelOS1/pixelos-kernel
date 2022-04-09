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
	{ 0x67a87f5c, "pcm3060_regmap" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf13fb63a, "pcm3060_probe" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-pcm3060");

MODULE_ALIAS("spi:pcm3060");

MODULE_INFO(srcversion, "5438A39D2C241FD692C3E9A");
