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
	{ 0xd2eb7204, "adau17x1_precious_register" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa50b25ea, "adau17x1_add_widgets" },
	{ 0x6a57e467, "adau17x1_resume" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0xfa96e89, "snd_soc_add_component_controls" },
	{ 0x81abd560, "adau17x1_probe" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0xa5406e88, "adau17x1_volatile_register" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x2e0e88be, "adau17x1_dai_ops" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x1dacfdc7, "adau17x1_readable_register" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0xf99f63e9, "adau17x1_add_routes" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-adau17x1,snd-soc-core");


MODULE_INFO(srcversion, "1023CF030D3E1FD3EB928DC");
