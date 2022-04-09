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
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x3498fc9c, "snd_hda_codec_prepare" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xa60642c9, "snd_hdac_ext_bus_get_link" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xc37c4ec6, "snd_hda_codec_device_new" },
	{ 0xbab85700, "snd_hdac_ext_bus_link_put" },
	{ 0x767d0483, "snd_hda_codec_parse_pcms" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xc463283e, "snd_hdac_regmap_exit" },
	{ 0x7c04012c, "snd_hdac_display_power" },
	{ 0xf2bb95a, "snd_hda_codec_set_name" },
	{ 0xc6a16883, "snd_hdac_ext_bus_link_get" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x24192fab, "snd_hda_codec_pcm_put" },
	{ 0x3a2f0bb8, "snd_hda_codec_cleanup_for_unbind" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba6a2b, "snd_hda_codec_cleanup" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6d33a4c7, "snd_hda_codec_build_controls" },
	{ 0x521acfe7, "snd_hdac_regmap_init" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-ext-core,snd-hda-core,snd-soc-core");


MODULE_INFO(srcversion, "D082C2442A236BD0A8BD9A4");
