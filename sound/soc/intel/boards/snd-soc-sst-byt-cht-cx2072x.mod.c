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
	{ 0xf295d712, "devm_snd_soc_register_card" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x5a921311, "strncmp" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x5e6ef08, "snd_soc_dai_set_bclk_ratio" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0x761527a1, "put_device" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x2279f2e9, "snd_soc_component_set_jack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0x861ea35f, "snd_soc_dai_set_fmt" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x406c510c, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "ADCB22274351514FF855581");
