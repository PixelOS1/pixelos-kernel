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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x79a4b693, "snd_soc_of_parse_card_name" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56f513af, "snd_soc_of_parse_pin_switches" },
	{ 0x38b4bd3a, "snd_soc_runtime_calc_hw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x935cfa0a, "snd_soc_daifmt_parse_format" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb5db2c46, "devm_get_clk_from_child" },
	{ 0x8f49d336, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0xac092bdc, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf9622dd1, "snd_soc_daifmt_clock_provider_from_bitmap" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "2D38FE98E3390536B0E9908");
