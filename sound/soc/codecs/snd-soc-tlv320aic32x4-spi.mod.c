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
	{ 0x9774f878, "aic32x4_probe" },
	{ 0x3d34b44d, "aic32x4_remove" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x30a0c099, "aic32x4_regmap_config" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9d27181c, "spi_get_device_id" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-tlv320aic32x4");

MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6C*");
MODULE_ALIAS("spi:tlv320aic32x4");
MODULE_ALIAS("spi:tlv320aic32x6");

MODULE_INFO(srcversion, "F9D813AA9B9F2A5F412E3C5");
