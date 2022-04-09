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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x682c7b6a, "snd_soc_get_volsw_sx" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xece57840, "regmap_register_patch" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x6f26a144, "_dev_crit" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x406b770a, "snd_soc_info_volsw_sx" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x60f85b44, "snd_soc_put_volsw_sx" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd,regmap-i2c");

MODULE_ALIAS("i2c:cs35l36");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l36");
MODULE_ALIAS("of:N*T*Ccirrus,cs35l36C*");

MODULE_INFO(srcversion, "0681E93ACDA524794707696");
