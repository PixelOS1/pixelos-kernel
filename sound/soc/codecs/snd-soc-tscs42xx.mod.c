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
	{ 0xf9a482f9, "msleep" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xece57840, "regmap_register_patch" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe7548edd, "snd_soc_bytes_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x460064b4, "snd_soc_bytes_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0x25052202, "snd_soc_bytes_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Ctempo,tscs42A1");
MODULE_ALIAS("of:N*T*Ctempo,tscs42A1C*");
MODULE_ALIAS("of:N*T*Ctempo,tscs42A2");
MODULE_ALIAS("of:N*T*Ctempo,tscs42A2C*");
MODULE_ALIAS("i2c:tscs42A1");
MODULE_ALIAS("i2c:tscs42A2");

MODULE_INFO(srcversion, "F00FCBCD8D9D6993EA171E4");
