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
	{ 0xdb75cc50, "pcm186x_regmap" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2d3e9729, "pcm186x_probe" },
};

MODULE_INFO(depends, "i2c-core,snd-soc-pcm186x,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm1862");
MODULE_ALIAS("of:N*T*Cti,pcm1862C*");
MODULE_ALIAS("of:N*T*Cti,pcm1863");
MODULE_ALIAS("of:N*T*Cti,pcm1863C*");
MODULE_ALIAS("of:N*T*Cti,pcm1864");
MODULE_ALIAS("of:N*T*Cti,pcm1864C*");
MODULE_ALIAS("of:N*T*Cti,pcm1865");
MODULE_ALIAS("of:N*T*Cti,pcm1865C*");
MODULE_ALIAS("i2c:pcm1862");
MODULE_ALIAS("i2c:pcm1863");
MODULE_ALIAS("i2c:pcm1864");
MODULE_ALIAS("i2c:pcm1865");

MODULE_INFO(srcversion, "264C8F711F564CF3BA559FB");
