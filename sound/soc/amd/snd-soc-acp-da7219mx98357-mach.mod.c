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
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0xf2cc2cce, "acp_bt_uart_enable" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0xf7998053, "snd_soc_dai_set_pll" },
	{ 0x85a05944, "da7219_aad_jack_det" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabfc1a9f, "snd_jack_set_key" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x2279f2e9, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf350a2ce, "devm_regulator_register" },
	{ 0x81f466c5, "device_property_present" },
};

MODULE_INFO(depends, "snd-soc-core,acp_audio_dma,snd-soc-da7219,snd,snd-pcm");

MODULE_ALIAS("acpi*:AMD7219:*");
MODULE_ALIAS("acpi*:AMDI5682:*");

MODULE_INFO(srcversion, "1BF7A2C77F54A4B9A2194E4");
