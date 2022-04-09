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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "93829A48C6CF7E1793EDB3F");
