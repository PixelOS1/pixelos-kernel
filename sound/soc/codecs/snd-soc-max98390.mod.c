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
	{ 0xf9a482f9, "msleep" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x1564421, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:MX98390:*");
MODULE_ALIAS("i2c:max98390");

MODULE_INFO(srcversion, "5E8B9F1DE555F4C00A0421F");
