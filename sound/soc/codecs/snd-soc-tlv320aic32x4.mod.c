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
	{ 0xf9a482f9, "msleep" },
	{ 0x4871d75d, "clk_hw_register_clkdev" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xfb8ca534, "devm_clk_register" },
	{ 0xfa96e89, "snd_soc_add_component_controls" },
	{ 0x26b74bca, "dev_get_regmap" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb1710066, "snd_ctl_boolean_mono_info" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x58915769, "devm_clk_bulk_get" },
	{ 0x92997ed8, "_printk" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0x68462f0f, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xe6a3ee26, "gpiod_set_raw_value_cansleep" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "4D017DE884AD056C06EF116");
