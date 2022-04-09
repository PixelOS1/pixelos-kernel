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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x147bb05b, "max_98373_ops" },
	{ 0xf295d712, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x2b92487c, "max_98390_set_codec_conf" },
	{ 0xfe1543ff, "hda_dsp_hdmi_build_controls" },
	{ 0x3a2cbd36, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x45bf28cb, "snd_soc_dapm_info_pin_switch" },
	{ 0xbc0a51d8, "sof_dai_get_mclk" },
	{ 0xd688d5fa, "max_98390_spk_codec_init" },
	{ 0x68830608, "snd_soc_dapm_put_pin_switch" },
	{ 0x31f4740a, "rt5682_sel_asrc_clk_src" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0x48077337, "max_98390_ops" },
	{ 0xf7998053, "snd_soc_dai_set_pll" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xabfc1a9f, "snd_jack_set_key" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf6f150fe, "hdac_hdmi_jack_port_init" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8cb1f8a, "max_98390_4spk_components" },
	{ 0xc24b590d, "max_98373_set_codec_conf" },
	{ 0x1170afd3, "max_98373_spk_codec_init" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1951582c, "max_98373_components" },
	{ 0x1eac9515, "snd_soc_dapm_get_pin_switch" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x2279f2e9, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa3ff95e2, "max_98390_components" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x45b7b077, "snd_soc_dai_set_sysclk" },
	{ 0x2a71223, "max_98360a_dai_link" },
	{ 0x36287a48, "max_98357a_dai_link" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0xc467dca0, "hdac_hdmi_jack_init" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0xd26f5b7e, "rt5682s_sel_asrc_clk_src" },
	{ 0x4ab909f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xcea381dd, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-intel-sof-maxim-common,snd-soc-core,snd-soc-intel-hda-dsp-common,snd-sof,snd-soc-rt5682,snd,snd-soc-hdac-hdmi,snd-soc-rt5682s");

MODULE_ALIAS("platform:sof_rt5682");
MODULE_ALIAS("platform:tgl_mx98357_rt5682");
MODULE_ALIAS("platform:jsl_rt5682_rt1015");
MODULE_ALIAS("platform:tgl_mx98373_rt5682");
MODULE_ALIAS("platform:jsl_rt5682_mx98360");
MODULE_ALIAS("platform:cml_rt1015_rt5682");
MODULE_ALIAS("platform:tgl_rt1011_rt5682");
MODULE_ALIAS("platform:jsl_rt5682_rt1015p");
MODULE_ALIAS("platform:adl_mx98373_rt5682");
MODULE_ALIAS("platform:adl_mx98357_rt5682");
MODULE_ALIAS("platform:adl_max98390_rt5682");
MODULE_ALIAS("platform:adl_mx98360_rt5682");

MODULE_INFO(srcversion, "BA5003324F94C511B163538");
