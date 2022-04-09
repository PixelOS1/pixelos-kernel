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
	{ 0x8505272c, "snd_pcm_hw_constraint_msbits" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0x4ed98154, "null_dailink_component" },
	{ 0xf7998053, "snd_soc_dai_set_pll" },
	{ 0x85a05944, "da7219_aad_jack_det" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabfc1a9f, "snd_jack_set_key" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0xf6f150fe, "hdac_hdmi_jack_port_init" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xbe1f0d9, "snd_soc_dapm_ignore_suspend" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0xc467dca0, "hdac_hdmi_jack_init" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0x37663150, "snd_soc_dapm_enable_pin" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-da7219,snd,snd-soc-hdac-hdmi");

MODULE_ALIAS("platform:kbl_da7219_max98927");
MODULE_ALIAS("platform:kbl_max98927");
MODULE_ALIAS("platform:kbl_da7219_max98373");
MODULE_ALIAS("platform:kbl_max98373");

MODULE_INFO(srcversion, "C43EDF0FD9E8B2B7BFC46DD");
