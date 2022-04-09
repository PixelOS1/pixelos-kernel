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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb3fc694, "snd_soc_dapm_del_routes" },
	{ 0xc6fd7ec6, "devm_sigmadsp_init_regmap" },
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x551faa7e, "sigmadsp_attach" },
	{ 0xae620be9, "adau_calc_pll_cfg" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xe8c28689, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfa96e89, "snd_soc_add_component_controls" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x425fc1ef, "sigmadsp_setup" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0xf67bb4a3, "sigmadsp_restrict_params" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x69acdf38, "memcpy" },
	{ 0x86bbe627, "snd_soc_component_test_bits" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x46c3c3b2, "snd_soc_dapm_mux_update_power" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-sigmadsp-regmap,snd-soc-sigmadsp,snd-soc-adau-utils");


MODULE_INFO(srcversion, "767F0C1D1DEF5058790680D");
