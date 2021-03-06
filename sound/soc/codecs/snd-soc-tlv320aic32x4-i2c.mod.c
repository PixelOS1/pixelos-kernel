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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x9774f878, "aic32x4_probe" },
	{ 0x3d34b44d, "aic32x4_remove" },
	{ 0x30a0c099, "aic32x4_regmap_config" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,snd-soc-tlv320aic32x4,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x4C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6");
MODULE_ALIAS("of:N*T*Cti,tlv320aic32x6C*");
MODULE_ALIAS("of:N*T*Cti,tas2505");
MODULE_ALIAS("of:N*T*Cti,tas2505C*");
MODULE_ALIAS("i2c:tlv320aic32x4");
MODULE_ALIAS("i2c:tlv320aic32x6");
MODULE_ALIAS("i2c:tas2505");

MODULE_INFO(srcversion, "9D05197459FCA179E09E9A0");
