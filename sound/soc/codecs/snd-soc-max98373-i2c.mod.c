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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xf7175300, "regmap_read" },
	{ 0xb4d1bbd5, "max98373_slot_config" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf5702f18, "devm_gpio_request" },
	{ 0x5e24b0cd, "soc_codec_dev_max98373" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0x8c6b8567, "max98373_reset" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0x81f466c5, "device_property_present" },
};

MODULE_INFO(depends, "snd-pcm,i2c-core,snd-soc-max98373,regmap-i2c,snd-soc-core");

MODULE_ALIAS("i2c:max98373");
MODULE_ALIAS("acpi*:MX98373:*");

MODULE_INFO(srcversion, "ACB48152348DEF57021AEBB");
