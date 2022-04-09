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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf295d712, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0xe3acc530, "rt5670_jack_resume" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0xf7998053, "snd_soc_dai_set_pll" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabfc1a9f, "snd_jack_set_key" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0x7ce07cc9, "rt5670_sel_asrc_clk_src" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5a921311, "strncmp" },
	{ 0x6435e51d, "rt5670_jack_suspend" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x2f5ee4db, "rt5670_components" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0x761527a1, "put_device" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0x861ea35f, "snd_soc_dai_set_fmt" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x13bc7b1b, "rt5670_set_jack_detect" },
	{ 0x406c510c, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5670,snd,snd-pcm");


MODULE_INFO(srcversion, "DF6E3175FB133D9335EDC90");
